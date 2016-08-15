#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
	char luaChon[3];
	int tam;
	printf("Bay gio co phai la buoi chieu?\n");
	scanf("%s",luaChon);
	if (toupper(luaChon[0]) == 'Y' || strcmp(luaChon,"Yes") == 0) {
		tam = 1;
	}
	if (toupper(luaChon[0]) == 'N' || strcmp(luaChon,"No") == 0)
		tam = 0;
	else
		tam = 2;
	switch(tam) {
		case 1:
			printf("Xin chao buoi chieu\n");
			break;
		case 0:
			printf("Bay gio khong phai buoi chieu\n");
			break;
		default:
			printf("Khong hieu\n");
			break;
	}
}
