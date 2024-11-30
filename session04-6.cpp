#include<stdio.h>
int main(){
	int dauthang;
	int cuoithang;
	printf("moi nhap so dien dau thang");
	scanf("%d",&dauthang);
	printf("moi nhap so dien cuoi thang");
	scanf("%d",&cuoithang);
	int sodien=cuoithang-dauthang;
	if(0<=sodien<50){
		printf("gia dien 10.000");
	}else if(50<=sodien<100){
		printf("gia dien 15.000");
	}else if(100<=sodien<150){
		printf("gia dien 20.000");
	}else if(150<=sodien<200){
		printf("gia dien 25.000");
	}else if(200<=sodien){
		printf("gia dien 30.000");
	}
	
	return 0;
}
