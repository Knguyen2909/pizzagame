#!/bin/bash
dir=$(dirname $0)

if [[ -e print-fp.c ]] ; then
	echo "Trying to build print-fp.c: "
	echo gcc -Wall print-fp.c
	gcc -Wall print-fp.c 2>&1
  if [[ "$?" == "0" ]] ; then
    echo "OK!"
    bash $dir/run-test.sh ./a.out $dir/test
  else
    echo -e "Error, couldn't build\n0/6 marks"
  fi
fi
