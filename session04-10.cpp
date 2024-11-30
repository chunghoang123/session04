#include<stdio.h>
int main(){
	int a,b,c;
	printf("moi nhap 3 so nguyen\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a > b) {
        int tam = a;
        a = b;
        b = tam;
    }
    if (a > c) {
        int tam = a;
        a = c;
        c = tam;
    }
    if (b > c) {
        int tam = b;
        b = c;
        c = tam;
    }
    printf("%d %d %d", a,b,c);
	return 0;
}
