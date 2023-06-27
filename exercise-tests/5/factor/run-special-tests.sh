#!/bin/bash
dir=$(dirname $0)

if [[ -e factor.c ]] ; then
	echo "Trying to build factor: "
	echo gcc -Wall factor.c my_math.c
	gcc -Wall -I. factor.c my_math.c -lm 2>&1
  if [[ "$?" == "0" ]] ; then
    bash $dir/run-test.sh ./a.out $dir/test
  else
    echo
    echo "Trying alternative to compile"
    echo gcc -Wall factor.c
  	gcc -Wall -I. factor.c  -lm 2>&1
    if [[ "$?" == "0" ]] ; then
      echo "NOTE that you must place DECLARATIONS into header files and the IMPLEMENTATION in C files. There should be only ONE main() function in factor.c! Check the tutorial from Week 4 again!"
      echo "Next time you won't get any marks!"
      bash $dir/run-test.sh ./a.out $dir/test
      exit 0
    fi

    echo "Couldn't compile factor! (10 marks!) Make sure your program compiles."
    echo "0/10 marks"
  fi
fi
