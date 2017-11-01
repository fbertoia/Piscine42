cat $1 | grep -i bauer | grep -i n | rev | cut -d "	" -f2 | rev | grep "-"
