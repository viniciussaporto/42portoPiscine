#!/bin/sh
find . | git check-ignore --stdin
#find . to search for .gitignore at the root of the project | --stdin to read the output