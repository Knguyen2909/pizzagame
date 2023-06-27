#!/bin/bash

dir=$(dirname $0)

marks=0
max=2

if [[ -e gcd.c ]] ; then
	echo "Trying to build gcd.c "
	echo gcc -Wall gcd.c my_gcd_lib.c  -I.
	gcc -Wall gcd.c my_gcd_lib.c -I. 2>&1
  if [[ "$?" == "0" ]] ; then
      ./a.out 110 20 > tmp
      echo "10" > expected
      if diff -w expected tmp ; then
        echo "Result OK"
        marks=$(($marks + 1))
      else
        echo "Result is unexpected!"
      fi
  else
    echo "gcd.c cannot be compiled (2 marks)"
  fi
  echo "Trying to use gcd()"
  gcc -Wall $dir/test/driver.c my_gcd_lib.c -I. 2>&1
  RES=$(./a.out)
  if [[ "$RES" == "OK" ]] ; then
    echo "Result OK"
    marks=$(($marks + 1))
  else
    echo "Result is unexpected!"
  fi
else
  echo "gcd.c not provided (2 marks)"
fi


echo "$marks/$max marks"
