#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang mot chieu");
	scanf("%d",&n);
	float numbers[n];
	for(int i=0;i<n;i++){
	printf("numbers[%d]=",i);
	scanf("%f", &numbers[i]);
	}
	int max= numbers[0];
	int min=numbers[0];
	printf("gia tri max %d\t va gia tri min %d\t", max , min);
	for(int i=0;i<n;i++){
		if(max>numbers[i]){
			max=numbers[i];
		}
		if(min<numbers[i]){
			min=numbers[i];
}
}
    printf("min=%d va max=%d",max,min);
}
