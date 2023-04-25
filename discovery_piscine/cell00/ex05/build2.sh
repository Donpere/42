#!/bin/bash

if [ $# -eq 0 ]
then
	echo "No arguments supplied"
fi
for i in "$@"
do
	mkdir "ex$i"
done
