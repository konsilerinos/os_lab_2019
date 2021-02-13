#!/bin/bash

for ((i=1; i<151; i++))
do
	printf "%d " $((1 + $RANDOM % 10)) >> numbers.txt
done
