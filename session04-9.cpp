#include<stdio.h>
int main(){
	int ngay,thang,nam;
	int namnhuan=0;
	printf("moi nhap so luong ngay:");
	scanf("%d",&ngay);	
	printf("moi nhap thang:");
	scanf("%d",&thang);	
	printf("moi nhap nam:");
	scanf("%d",&nam);	
	if((nam%4==0&& nam%100!=0)||(nam%400==0)){
		printf("la nam nhuan\n");
		namnhuan=1;
		
	}else{
		printf("ko phai nam nhuan\n");
	}		
	switch(thang){
		case 1:
			printf("hop le");
			ngay=31;
			break;
		case 3:
			printf("hop le");
			ngay=31;
			break;
		case 5:
			printf("hop le");
			ngay=31;
			break;
		case 7:
			printf("hop le");
			ngay=31;
			break;
		case 8:
			printf("hop le");
			ngay=31;
			break;	
		case 10:
			printf("hop le");
			ngay=31;
			break;
		case 12:
			printf("hop le");
			ngay=31;
			break;
		case 4:
			printf("hop le");
			ngay=30;
			break;
		case 6:
			printf("hop le");
				ngay=30;
			break;
		case 9:
			printf("hop le");
				ngay=30;
			break;
		case 11:
			printf("hop le");
				ngay=30;
			break;
		case 2:
			if(namnhuan==1){
				printf("hop le");
					ngay=29;
			}
			else{
				printf("hop le");
					ngay=28;
			}
			break;
		default :
			printf(" ko hop le");								
	}
	return 0;
}
