#include<stdio.h>
int prime(int a){
	int cout=0;
	for (int i=2;i<a;i++){
		if(a%i==0){
			cout=1;
		}
	}
	if(cout==0){
		printf("%d la so nguyen so\n",a);
	}else{
		printf("%d khong phai la so nguyen to\n",a);
	}
}
int main(){
	int n,m;
	int number[n];
	int numbers[m];
	printf("Nhap vao so phan tu mang 1 va mang 2: ");
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		printf("number[%d] = ",i);
		scanf("%d",&number[i]);
	}
	for(int i=0;i<m;i++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	int primeNumber=prime(n);
	for(int i=0;i<n;i++){
		primeNumber=prime(number[n]);
	}
	for(int i=0;i<m;i++){
		primeNumber=prime(numbers[m]);
	}
}
