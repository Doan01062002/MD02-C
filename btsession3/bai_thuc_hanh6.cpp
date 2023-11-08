#include<stdio.h>
int main(){
	int nam_sinh;
	printf("Nhap nam sinh: ");
	scanf("%d",&nam_sinh);
	int tuoi = 2023 - nam_sinh;
	printf("Tuoi cua ban: %d\n",tuoi);
  if (tuoi%2)
  	printf("Tuoi vua nhap la so le");
  else
    printf("Tuoi vua nhap la so chan");
}
