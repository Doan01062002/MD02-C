#include<stdio.h>
int main(){
	// khai bao va khoi tao bien r la ban kinh hinh tron va PI = 3,14
	float r;
	const float PI = 3.14;
	// thong bao nhap ban kinh r
	printf("nhap ban kinh r:");
	//lay gia tri gan vao bien r
	scanf("%f", &r);
	//khai bao va khoi tao bien dien tich
	float area = PI*r*r;
	//khai bao va khoi tao bien chu vi
	float perimeter = 2*PI*r;
	//In ra dien tich va chu vi hinh tron
	printf("Hinh chu nhat co dien tich: %.1f va chu vi: %.1f", area, perimeter);
	}
