#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
	char kt;
	printf("Bay gio co phai buoi chieu khong? \n");
	kt = getchar();
	if(toupper(kt) == 'Y') {
		printf("Xin chao buoi chieu\n");
	}
	if(toupper(kt) == 'N') {
		printf("Bay gio khong phai buoi chieu\n");
	}
	exit(0);
}
