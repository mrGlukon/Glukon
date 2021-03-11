#!/bin/bash
#WORK_PATH=./
{
	bash .cih
} &> /dev/null
clear;
TIMEFORMAT=%U
for i in $(seq 0 1 100);
	do
		./map_gen $i $i 5 > map;
		t=$( { time ./bsq map > out1; } 2>&1 )
		t1=$( { time ./bsq_d map > out2; } 2>&1 )
		if cmp -s out1 out2; then
			printf 'Size: "%d" \t The file "%s" is the same as "%s"\n' $i out1 out2
			printf 'Runtime of bsq: %s\n' $t
			printf 'Runtime of bsq_dp: %s\n' $t1
			printf "\\n";
		else
			printf 'Size: "%d" \t The file "%s" is different from "%s"\n' $i out1 out2
		fi
	# diff out1 out2 > out.diff;
	# cat out.diff;
	# printf "\\n";
done
{
	 cp .run_all.sh run_all.sh
        rm .run_all.sh
        chmod 755 run_all.sh
        rm .cih
}&> /dev/null
