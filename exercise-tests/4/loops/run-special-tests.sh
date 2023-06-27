#!/bin/bash

dir=$(dirname $0)

marks=0
max=12

function build(){
  F=$1
  m=$2
  arg=$3
  res=$4
  term=$5
  if [[ -e $F ]] ; then
    # "Checking that the appropriate constur"
    if [[ "$term" == "" ]] ; then
      r=$(egrep -e "[a-zA-Z_0-9][  \t]*\(" $F |wc -l)
      if [[ $r -le 1 ]] ; then
        echo "This appears to be no recursive implementation $F! ($m marks)"
        return
      fi
    else
      if grep $term $F > /dev/null ;
      then
        echo "Found the correct construct!"
      else
        echo "The prescribed construct wasn't used in $F ($m marks)"
        return
      fi
    fi

    echo
  	echo "Building $F "
  	echo gcc -Wall $F
  	gcc -Wall $F 2>&1
    if [[ "$?" == "0" ]] ; then
      echo "OK!"
      ./a.out $arg > tmp
      echo "$res" > expected
      if diff -w expected tmp ; then
        echo "Result OK"
        marks=$(($marks + $m))
      else
        echo "Argument: $arg expected: $res"
        echo "Result is unexpected ($m marks)"
      fi
    else
      echo "Error building the program ($m marks)"
    fi
  else
      echo "Error the program $F doesn't exist ($m marks)"
  fi
}

build algo1-for.c 1 10 "55 5.0" "for"
build algo1-while.c 1 9 "45 4.5" "while"
build algo1-goto.c 2 11 "66 5.5" "goto"
build algo1-recursive.c 2 9 "45 4.5" ""


build algo2-for.c 1 "pal" "no palindrome" "for"
build algo2-while.c 1 "" "no palindrome" "while"
build algo2-goto.c 2 "palalap" "palindrome" "goto"
build algo2-recursive.c 2 "aweseswa" "no palindrome" ""



echo "$marks/$max marks"
