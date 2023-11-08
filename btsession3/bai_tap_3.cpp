#include<stdio.h>
int main(){
	//khai bao bien luu tru diem toan,van,anh
	float maths, literature, english;
	//thong bao va nhap gia tri
	printf( "nhap gia tri vao math literature english:");
	//lay gia tri gan vao dia chi
	scanf("%f%f%f", &maths, &literature, &english);
	//khai bao va khoi tao bien tong diem
	float total = maths+literature+english;
	float medium = (maths+literature+english)/3;
	//in ra tong diem va diem trung binh
	printf("tong diem:%.2f va diem trung binh:%.2f", total, medium);
	}
