#!/bin/sh
# Runs SCRIPT, the cacheable steps of one unit, and bundles its OUTPUTS from HOME into BUNDLE.
# usage: memo.sh HOME OUTPUTS SCRIPT KEY -c -o BUNDLE INPUT
# ccache calls it with -c -o and the input after the other words. KEY puts the tools' identity in the cache key.
set -e
sh -ec "$3"
tar -cf "$7" -C "$1" $2
