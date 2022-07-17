#!/bin/sh
cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -f 1 -d : | rev | sort -r | sed -n "$FT_LINE1;$FT_LINE2 p" | tr '\n' ',' | sed 's:,:, :g' | sed 's:, $:.:'
# grep -v "remove commentaries" | sed -n "calls next line displays the line" | cut "defines field and delimits the output" | rev "reverses order"
# sort -r "reverses alphabetical order" | sed -n "goes from first login info to the second and prints it" | tr "transforms new lines output to ','"
# sed "substitutes , $ to . ont the first occurrence"