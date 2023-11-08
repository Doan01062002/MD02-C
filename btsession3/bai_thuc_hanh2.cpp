#include<stdio.h>
int main(){
	float length, height;
	printf("Nhap chieu dai va chieu rong hinh chu nhat:");
	scanf("%f%f,&length,&height");
	float area = length*height;
	float perimeter = (length + height)*2;
	printf("Hinh chu nhat co dien tich: %.1f va chu vi: %.1f", area, perimeter);
	}
