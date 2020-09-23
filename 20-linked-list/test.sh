#!/usr/bin/env bash
# Exit on first error, unset variable, or pipe failure
set -euo pipefail

# Navigate to same folder as compilation files
cd "$(dirname ${BASH_SOURCE[0]})"

# Define a common compiler program/settings
compiler="ccache g++ -isystem ."

# Build our program
# DEV: We need to specify `igloo` in our CLI path to allow its `<>` import style
# DEV: By using `-isystem` instead of `-I`, https://stackoverflow.com/a/1900578
# TODO: By using `.` as a system dependency, we might be missing out on warnings
# DEV: By splitting up `.cpp` builds, we can use `ccache` and `-c` to cache each compilation
#   So far: 1s -> 0.1s
rm -r build &> /dev/null || true
mkdir -p build
mkdir -p build/test-files
$compiler -c test.cpp -o build/test.cpp.o
for filepath in test-files/*.cpp; do
  $compiler -c "${filepath}" -o build/"${filepath}".o
done
$compiler build/*.o build/test-files/*.o -o test.out

# Run our program
# DEV: We could make this optional but meh
./test.out

# Lint our files
lint_output=$($compiler -Wall -Wextra -Wpedantic *.cpp test-files/*.cpp -o /dev/null 2>&1)
if test "$lint_output" != ""; then
  echo "$lint_output" 1>&2
  exit 1
fi
