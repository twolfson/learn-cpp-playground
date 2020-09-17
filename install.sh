#!/usr/bin/env bash
# Exit on first error, unset variable, or pipe failure
set -euo pipefail

# Install our dependencies via git submodules
echo "Installing top-level dependencies" 1>&2
git submodule update

# Install our submodule's dependencies
# DEV: Unsure what we're going to do if our submodules have dependencies...
# DEV: We avoid `foreach` here as each submodule might have different dependency systems
echo "Installing vendor/igloo dependencies" 1>&2
cd vendor/igloo
  git submodule update
  cd - > /dev/null

echo "Dependencies installed" 1>&2
