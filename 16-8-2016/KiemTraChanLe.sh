#!/bin/bash
echo "Nhap so can kiem tra: "
read n
if [ `expr $n % 2` -eq 0 ]
then
echo "So vua nhap la so chan."
else
echo "So vua nhap la so le."
fi
exit 0
