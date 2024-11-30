#include<stdio.h>
int main(){
	int a,b,c;
	printf("moi nhap chieu dai 3 cach tam giac\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a+b>c&&a+c>b&&b+c>a){
		printf("la 3 canh tam giac");
	}else{
		printf("ko phai 3 canh tam giac");
	}
	return 0;
} 
