#include<stdio.h>
int main(){
	// dat x la so phut goi va y la phi thue bao hang thang
	int x, y = 25000;
	printf("nhap so phut goi:");
	scanf("%d", &x);
	if(x>200){
		printf("cuoc dien thoai la: %d", x*100+y);
	}else if(x>150){
		printf("cuoc dien thoai la: %d", x*200+y);
	}else if(x>50){
		printf("cuoc dien thoai la: %d", x*400+y);
	}else{
		printf("cuoc dien thoai la: %d", x*600+y);
	}
}	
