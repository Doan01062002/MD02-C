#include<stdio.h>
int main(){
	int so_nguyen, thousandDigit, hundredDigit, dozenDigit, unitDigit;
	printf("nhap so:\n");
	scanf("%d", &so_nguyen);
	unitDigit = so_nguyen%10;
	dozenDigit = (so_nguyen/10)%10;
	hundredDigit = (so_nguyen/100)%10;
	thousandDigit = so_nguyen/1000;
	printf("\nTong cua day so la: %d",unitDigit+dozenDigit+hundredDigit+thousandDigit);
	printf("\nDay so dao nguoc la: %d",unitDigit*1000+dozenDigit*100+hundredDigit*10+thousandDigit);
	}
