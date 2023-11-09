#include<stdio.h>
int main(){
	int number;
	printf("nhap mot so nguyen:");
	scanf("%d",&number);
	if(number%3==0 && number%5==0){
		printf("%d chia het cho 3 va 5");}
	else{
		printf("khong chia het cho 3 va 5");
	}
	}
