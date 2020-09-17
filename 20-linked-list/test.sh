#!/usr/bin/env bash
# Exit on first error, unset variable, or pipe failure
set -euo pipefail

# Navigate to same folder as compilation files
cd "$(dirname ${BASH_SOURCE[0]})"

# Build our program
# DEV: We need to specify `igloo` in our CLI path to allow its `<>` import style
g++ -I . test.cpp -o test.out

# Run our program
# DEV: We could make this optional but meh
./test.out
