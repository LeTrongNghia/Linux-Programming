#include <stdio.h>
#include <stdlib.h>
int main() {
	char ten[100];
	char ngaySinh[100];
	printf("Nhap ten: \n");
	scanf("%99[^\n]",ten);
	printf("Nhap ngay sinh: \n");
	scanf("%s",ngaySinh);
	xuatTen(ten);
	xuatNS(ngaySinh);
	exit(0);
}
