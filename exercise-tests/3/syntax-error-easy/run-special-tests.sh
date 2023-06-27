#!/bin/bash

dir=$(dirname $0)

marks=0
max=4
if [[ -e  error1.c ]] ; then
  gcc  error1.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile error1.c"
  else
    ret=$(./a.out)
    if [[ $ret == "hello, world!" ]] ; then
      marks=$(($marks + 1))
      echo "error1: OK"
    else
      echo "error1 doesn't produce the correct output"
    fi
  fi
fi

if [[ -e  error2.c ]] ; then
  gcc  error2.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile error2.c"
  else
    ret=$(./a.out)
    if [[ $ret == "hello, world" ]] ; then
      marks=$(($marks + 1))
      echo "error2: OK"
    else
      echo "error2 doesn't produce the correct output"
    fi
  fi
fi

if [[ -e  error3.c ]] ; then
  gcc  error3.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile error3.c"
  else
    ret=$(./a.out)
    if [[ $ret == "Number one: 1" ]] ; then
      marks=$(($marks + 1))
      echo "error3: OK"
    else
      echo "error3 doesn't produce the correct output"
    fi
  fi
fi

if [[ -e  error4.c ]] ; then
  gcc  error4.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile error4.c"
  else
    ret=$(./a.out)
    if [[ $ret == "this isn't a multiline string!" ]] ; then
      marks=$(($marks + 1))
      echo "error4: OK"
    else
      echo "error4 doesn't produce the correct output"
    fi
  fi
fi

if [[ -e  error5.c ]] ; then
  gcc  error5.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile error5.c"
  else
    ret=$(./a.out)
    if [[ $ret == "Do not use single quotes for string literals!" ]] ; then
      marks=$(($marks + 1))
      echo "error5: OK"
    else
      echo "error5 doesn't produce the correct output"
    fi
  fi
fi


if [[ "$marks" == "5" ]] ; then
  marks=4
fi

echo "$marks/$max marks"
