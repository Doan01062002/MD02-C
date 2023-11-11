#include<stdio.h>
int main(){
	// dat x la tong doanh thu duoc tinh la trieu
	float x;
	printf("nhap tong doanh thu");
	scanf("%f", &x);
	if(x>300){
		printf("hoa hong la:%f trieu", x*0.2);
	}else if(x>100){
		printf("hoa hong la:%f trieu", x*0.1);
	}else if(x>0){
		printf("hoa hong la:%f trieu", x*0.05);
		}
	}	
