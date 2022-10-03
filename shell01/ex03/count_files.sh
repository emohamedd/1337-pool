#!/bin/sh
find . \( -type f -o -type d \) | wc -l | sed "s/[[:blank:]]//g"
