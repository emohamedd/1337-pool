#!/bin/sh

# TODO :
# [x] removing the comments
# [ ] removing the unwanted part 


cat /etc/passwd |  sed -e '/^#/d' | cut -d ":" -f 1 | awk "NR%2==0" | rev | sort -r | awk '{if (NR >= '$FT_LINE1' && NR <= '$FT_LINE2')print $0}'  | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'

