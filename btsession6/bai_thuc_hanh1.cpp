#include<stdio.h>
int main(){
	int sum=0;
	printf("cac so nguyen chan trong khoang tu 1 den 10 la:");
	for(int i=1; i<10; i++){
		if(i%2==0){
			printf("%d\n",i);
			sum=sum+i;
			}
		}
		printf("\n Tong cac so chan trong khoan tu 1 den 10 la:%d",sum);
	}		
