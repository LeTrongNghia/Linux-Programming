#include <stdio.h>
#include <stdlib.h>

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void nhapPS(PHANSO *x){
	printf("Nhap tu\n");
	scanf("%d",&x->tu);
	printf("Nhap mau\n");
	scanf("%d",&x->mau);
}

void xuatPS(PHANSO *x){
	printf("%d/%d\n",x->tu,x->mau);
}
int main(){
	int n;
	PHANSO *ps;
	printf("Ban muon tao mang bao nhieu phan tu:\n");
	scanf("%d",&n);
	ps = (PHANSO *) malloc(n * sizeof(PHANSO));
	for(int i = 0; i < n; i++) {
		printf("Npap ps[%d]:",i);
		nhapPS(ps+i);
	}
	for(int i = 0; i < n; i++) {
		xuatPS(ps+i);
	}
	exit(0);
}
