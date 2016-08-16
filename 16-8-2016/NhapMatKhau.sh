#!/bin/bash
kt=0
while [ $kt -eq 0 ]
do
	echo "Nhap mat khau:"
	read mk
	if [ $mk = "123456" ]
	then
		kt=1
	fi
done
echo "Dang nhap thanh cong"
