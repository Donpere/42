#!/bin/bash

if [ "$#" -lt 1 ]
then
    echo "No arguments supplied"
    exit 1
fi    

for i; do
	mkdir ex$i
done