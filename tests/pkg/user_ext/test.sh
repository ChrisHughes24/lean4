#!/usr/bin/env bash

rm -rf build
lake build -v 2>&1 | grep 'hello, test, world'
