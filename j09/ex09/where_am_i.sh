#!/bin/bash
VAR=`ifconfig | grep inet | grep broadcast | cut -d " " -f2`
if [ $VAR ]
then
	echo `ifconfig | grep inet | grep broadcast | cut -d " " -f2 | tr " " "\n"`
else
	echo Je suis perdu! 
fi
