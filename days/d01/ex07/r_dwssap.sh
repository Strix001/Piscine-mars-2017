cat /etc/passwd | grep -v "#" | cut -d : -f 1 | rev | sed 'n;d' | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed "s/$/, /" | tr -d "\n" | sed "s/, $/./" | tr -d "\n"
