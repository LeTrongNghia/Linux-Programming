#!/bin/bash
echo "Nhap duong dan"
read duongDan
echo "Cac thu muc con:"
for f in $( ls $duongDan/)
do
	if [ -d $duongDan/$f ]
	then
		echo "/$f"
	fi
done
