#! /bin/sh

i=0
sum=0
for an_arg in "$@" ; do
  sum=$(($sum + ${an_arg}))
  i=$(($i+1))
done

printf "%d / %d\n" $sum $i