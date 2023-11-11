#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	printf("nhap so hang a b c");
	scanf("%f %f %f", &a, &b, &c);
	float D=b*b-4*a*c;
	float x1 = (-b-sqrt(D))/2*a, x2 = (-b+sqrt(D))/2*a;
	if(a==0){
		if(b==0){
			printf("phuong trinh vo nghiem");
		}else
		printf("phuong trinh co nghiem la %f", -c/b);
		}else
	if(D>0){
		printf("phuong trinh co 2 nghiem phan biet la x1=%f va x2=%f", x1, x2);
		}else if(D==0){
			printf("phuong trinh co nghiem kep la %f", (-b/2*a));
		}else
		printf("phuong trinh vo nghiem");
		}
