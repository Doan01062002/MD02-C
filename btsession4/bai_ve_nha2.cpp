#include<stdio.h>
int main(){
	// gan cac canh cua tam giac la a, b, c
	int a, b, c;
	printf("nhap do dai cac canh cua tam giac");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b&&b==c){
		printf("tam giac deu");
		}else if(a==b||a==c||b==c){
		printf("tam giac can");
		}else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
		printf("tam giac vuong");
		}else if(a==b||a==c||b==c && a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
		printf("tam giac vuong can");
		}else if(a+b>c && a+c>b && b+c>a)
		printf("tam giac thuong");
	}
