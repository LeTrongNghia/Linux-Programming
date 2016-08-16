#!/bin/bash
echo "Khao sat cam nghi cua ban ve toi"
echo "4 muc do: 1 - Rat than; 2 - than; 3 - Binh thuong; 4 - Khong co gi"
read ks
case $ks in
	"4") echo "Cam on ban vi da xem toi la ban than";;
	"3") echo "O ta van la ban";;
	"2") echo "Ta co the than hon nua";;
	"1") echo "Toi hoi buon vi chuyen nay";;
	*) echo "Toi khong hieu y cua ban";;
esac
