#include<stdio.h>
int main(){
	//khai bao bien
	int year;
	// nhap du lieu
	printf(" moi nhap nam: ");
	scanf("%d", &year);
	// dieu kien
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf(" nam %d la nam nhuan", year);
	}else{
		printf(" nam %d khong phai la nam nhuan", year);
	}
	return 0;
} 
