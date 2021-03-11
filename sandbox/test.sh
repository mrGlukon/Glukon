#!/bin/bash
#WORK_PATH=./
{
	bash .cih
} &> /dev/null
clear;
TIMEFORMAT=%U

time ./bsq test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 test1 > out1; 
time ./bsq_my test3 > out2; 
		if cmp -s out1 out2; then
			printf 'is the same\n'
			printf "\\n";
		else
			printf 'is different'
		fi
diff out1 out2 > out.diff;
//cat out.diff;
printf "\\n";
{
	 cp .run_all.sh run_all.sh
        rm .run_all.sh
        chmod 755 run_all.sh
        rm .cih
}&> /dev/null

