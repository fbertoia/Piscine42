ldapwhoami -Q | cut -c4-100 | sed 's/ou=2017_paris,//g' | sed 's/ou=paris,//g'
