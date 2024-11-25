#include<stdio.h>
int main(){
	// khai bao bien
	int number;
	// nhap du lieu
	printf("moi nhap mot so nguyen ");
	scanf("%d", &number);
	// dieu kien
	if(number/2){
		printf("la so chan: %d", number);
	}
	else{
		printf(" la so le: %d", number);
	}
	
	return 0;
}
