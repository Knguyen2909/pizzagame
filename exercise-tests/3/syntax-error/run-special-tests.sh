#!/bin/bash

dir=$(dirname $0)

marks=0
max=6
if [[ -e  fixed1.c ]] ; then
  gcc  fixed1.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile fixed1.c"
  else
    ret=$(./a.out test test1)
    if [[ $ret == "./a.outtesttest1" || $ret == "testtest1" ]] ; then
      marks=$(($marks + 1))
      echo "Fixed1 is OK"
    else
      echo "Fixed1 produces unexpected output"
    fi
  fi
fi

if [[ -e  fixed2.c ]] ; then
  gcc  fixed2.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile fixed2.c"
  else
    ret=$(./a.out)
    if [[ $ret == "The circumference of the circle with radius 4.500000 is 63.617340" ]] ; then
      marks=$(($marks + 2))
      echo "Fixed2 is OK"
    else
      if [[ $ret == "The circumference of the circle with radius 4.500000 is 28.274372" ]] ; then
        marks=$(($marks + 2))
        echo "Fixed2 is OK"
      else
        echo "Fixed2 produces unexpected output"
      fi
    fi
  fi
fi

if [[ -e  fixed3.c ]] ; then
  gcc  fixed3.c
  if [[ $? != 0 ]] ; then
    echo "Cannot compile fixed3.c"
  else
    ret=$(./a.out)
    if [[ $ret == "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185" ]] ; then
      marks=$(($marks + 3))
      echo "Fixed3 is OK"
    else
      echo "Fixed3 produces unexpected output"
    fi
  fi
fi

echo "$marks/$max marks"
