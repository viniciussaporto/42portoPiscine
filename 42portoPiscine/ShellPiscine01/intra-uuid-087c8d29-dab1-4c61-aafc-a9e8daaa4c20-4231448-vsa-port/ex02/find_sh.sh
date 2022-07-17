#!/bin/sh
find . -type f -name "*.sh" | cut -f2 -d "/" | cut -f1 -d "."