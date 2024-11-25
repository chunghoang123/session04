#include<stdio.h>
int main(){
	// khai bao
	int num1, num2, num3;
	// nhap du lieu
	printf(" moi nhap so nguyen thu nhat: ");
	scanf("%d", &num1);
	printf(" moi nhap so nguyen thu hai: ");
	scanf("%d", &num2);
	printf(" moi nhap so nguyen thu ba: ");
	scanf("%d", &num3);
	// dieu kien
	if(num1<num3 && num3<num2){
		printf(" %d nam giua so thu nhat va so thu hai", num3);
	}else if(num1 > num3 && num3 > num2){
		printf(" %d nam giua so thu nhat va so thu hai", num3);
	}
	else{
		printf(" %d khong nam giua so thu nhat va so thu hai", num3);
	}
	
		
	return 0;
}
