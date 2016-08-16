#!/bin/bash
echo "Tong cac so le trong doan 0 -15"
tong=0
for i in {0..1510}
do
	if [ $(($i % 2)) -ne 0 ]
	then
		tong=$(($tong + $i))
	fi
done
echo "$tong"
