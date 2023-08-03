#!/bin/bash
dotc_files=$(ls *.c)
for file in $dotc_files
do
	gcc -c $file -o ${file%.c}.o
done
ar rcs liball.a *.o
