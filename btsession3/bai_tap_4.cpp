#include<stdio.h>
int main(){
	int number1, number2, number3;
	printf("nhap number1 number2 number3:");
	scanf("%d%d%d", &number1, &number2, &number3);
	//khai bao va khoi tao bien max va min co gia tri number1
	int max = number1, min = number1;
	if(max<number2){
	    max = number2;
	}
	if(max<number3){
		max = number3;
	}
	if(min>number2){
		min = number2;
	}
	if(min>number3){
		min = number3;
	}
	printf("gia tri nho nhat:%d\n", min);
	printf("gia tri lon nhat:%d", max);
	}
