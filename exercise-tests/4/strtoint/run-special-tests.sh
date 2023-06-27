#!/bin/bash
dir=$(dirname $0)

if [[ -e adder.c ]] ; then
	echo "Trying to build adder: "
	echo gcc -Wall adder.c my_conversion.c
	gcc -Wall -I. adder.c my_conversion.c 2>&1
  if [[ "$?" == "0" ]] ; then
    bash $dir/run-test.sh ./a.out $dir/test
  else
    echo
    echo "Trying alternative to compile"
    echo gcc -Wall adder.c
  	gcc -Wall -I. adder.c  -lm 2>&1
    if [[ "$?" == "0" ]] ; then
      echo "NOTE that you must place DECLARATIONS into header files and the IMPLEMENTATION in C files. There should be only ONE main() function in factor.c! Check the tutorial from Week 4 again!"
      echo "Next time you won't get any marks!"
      bash $dir/run-test.sh ./a.out $dir/test
      exit 0
    fi

    echo "Couldn't compile adder! (8 marks!) Make sure your program compiles."
    echo "0/8 marks"
  fi
fi
