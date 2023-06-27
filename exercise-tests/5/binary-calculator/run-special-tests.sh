#!/bin/bash

dir=$(dirname $0)

marks=0
max=3

if [[ -e ./compile.sh ]] ; then
  ./compile.sh
  if [[ ! -e calc ]] ; then
    echo "The generated executable must be called calc! (1 mark)"
  else
    echo "compile.sh works"
    marks=$(($marks + 1))
  fi
else
  echo "No compile script provided (1 mark)"
fi

if [[ -e calc.c ]] ; then
  gcc calc.c -o calc -lm
  if [[ -e calc ]]; then
    bash $dir/run-test.sh calc $dir/test
  else
    echo "Cannot compile calc!"
  fi
else
  echo "No calc.c provided."
fi

if [[ -s flow-graph-addition.pdf ]] ; then
  marks=$((marks + 2))
  echo "flow-graph-addition.pdf is there"
else
  echo "flow-graph-addition.pdf is missing (2 marks)"
fi


echo "$marks/$max marks"
