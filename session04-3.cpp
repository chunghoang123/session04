#include<stdio.h>
int main(){
	// khai bao bien
	int number;
	// nhap du lieu
	printf(" moi nhap mot so nguyen ");
	scanf("%d", &number);
	// dieu kien
	if(number % 3 == 0 && number % 5 == 0){
		printf("so nhap chia het cho 3 va 5: %d", number);
	}else if(number % 3 == 0){
		printf("so nhap chia het cho 3: %d", number);
	}else if(number % 5 == 0){
		printf("so nhap chia het cho 5: %d", number);
	}
	 
	
	return 0;
}
