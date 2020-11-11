#!/bin/sh

cat /etc/passwd | sed -e '/#/ d ' | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed -e 's/$/, /' | tr -d '\n' | rev | cut -c2- | sed -e 's/,/./' | rev | tr -d '\n'

