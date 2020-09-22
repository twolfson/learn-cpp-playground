#!/usr/bin/env bash
# Exit on first error, unset variable, or pipe failure
set -euo pipefail

# Navigate to same folder as compilation files
cd "$(dirname ${BASH_SOURCE[0]})"

# Build our program
# DEV: We need to specify `igloo` in our CLI path to allow its `<>` import style
# DEV: By using `-isystem` instead of `-I`, https://stackoverflow.com/a/1900578
# TODO: By using `.` as a system dependency, we might be missing out on warnings
# DEV: By splitting up `.cpp` builds, we can use `ccache` and `-c` to cache each compilation
#   So far: 1s -> 0.1s
rm -r build
shopt -s globstar
for filepath in $(ls **/*.cpp); do
  mkdir -p "$(dirname "${filepath}")"
  ccache g++ -c "${filepath}" -o build/"${filepath}".o
done
ccache g++ build/**/*.cpp.o -o test.out
shopt -u globstar

# Run our program
# DEV: We could make this optional but meh
./test.out
