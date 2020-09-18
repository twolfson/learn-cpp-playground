#!/usr/bin/env bash
# Exit on first error, unset variable, or pipe failure
set -euo pipefail

# Navigate to same folder as compilation files
cd "$(dirname ${BASH_SOURCE[0]})"

# Build our program
g++ tmp.cpp -o tmp.out

# Run our program
# DEV: We could make this optional but meh
./tmp.out
