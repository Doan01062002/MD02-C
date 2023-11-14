#include<stdio.h>
int main(){
	int n,sum;
	printf("nhap so phan tu cua mang");
	scanf("%d", &n);
	int numbers[n];
	for(int i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
		}
	int findNumber;
		printf("nhap gia tri findNumber");
		scanf("%d",&findNumber);
		for(int i=0;i<n;i++){
		    if(findNumber==numbers[i]){
		    	sum+=numbers[i];
			    printf("numbers[%d]= %d\n",i,findNumber);
			}
		}
		printf("tong la: %d",sum);	
	}
