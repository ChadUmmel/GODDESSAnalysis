#!/bin/bash
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./lib
echo "	****************************************************"
echo "	*        Cool analysis code written by Chad        *"
echo "	*Sorts the tree output by goddessSort (Josh Hooker)*"
echo "	*into interesting stuff like Ex and whatnot        *"
echo "	****************************************************"
echo ""
echo "Run this script by doing './masterscript.sh x y', where x and y are your first and last run. No preceding zeroes needed."
echo ""
echo "The parameters in the Analysis.h file can be adjusted to suit the specifics (beam, target, etc.) of your experiment"
echo ""

if [ -z "$1 $2" ];
then 
  echo "*** Please put the run number range after the script"
  exit 1
fi

for(( i=$1; i<=$2; i++ ));
do
if [ $i -gt 18 ] && [ $i -ne 32 ] && [ $i -lt 50 ] || [ $i -gt 56 ] && [ $i -lt 71 ] || [ $i -gt 75 ] && [ $i -lt 80 ] || [ $i -gt 81 ] && [ $i -ne 90 ] && [ $i -lt 95 ] || [ $i -gt 98 ] && [ $i -ne 105 ] && [ $i -lt 119 ] || [ $i -gt 122 ] && [ $i -ne 136 ] && [ $i -ne 138 ] && [ $i -ne 147 ] && [ $i -ne 154 ] && [ $i -ne 168 ] && [ $i -ne 176 ] && [ $i -lt 201 ] || [ $i -gt 202 ] && [ $i -ne 221 ] && [ $i -ne 233 ] && [ $i -lt 256 ] || [ $i -gt 257 ] && [ $i -ne 265 ] && [ $i -ne 267 ] && [ $i -ne 275 ] && [ $i -ne 297 ] && [ $i -ne 303 ] && [ $i -ne 305 ] && [ $i -ne 328 ] && [ $i -ne 332 ] && [ $i -ne 335 ] && [ $i -ne 343 ] && [ $i -ne 354 ] && [ $i -ne 356 ] && [ $i -lt 360 ] || [ $i -gt 361 ] && [ $i -ne 366 ] && [ $i -ne 373 ] && [ $i -ne 378 ] && [ $i -ne 385 ] && [ $i -lt 388 ]; #These are bad, background, or CH2 runs
then
	./GODDESSAnalysis $i
fi
done
