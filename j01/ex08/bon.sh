#!/bin/sh
ldapsearch -x "(sn=*BON*)"| grep "sn: " | wc -l | xargs
