#include<stdio.h>
int main(){
	// nhap vao chi so cong to dien dau thang la a va cuoi thang la b
	int a, b;
	printf("nhap so dien dau thang va cuoi thang");
	scanf("%d %d", &a, &b);
	int(b-a);
	if(0<=(b-a) && (b-a)<50){
		int price = 10000*(b-a);
		printf("tien dien la:%d ", price);
		}else if(50<=(b-a) && (b-a)<100){
		int price = 15000*(b-a);
		printf("tien dien la:%d",price);
	    }else if(100<=(b-a) && (b-a)<150){
		int price = 20000*(b-a);
		printf("tien dien la:%d", price);
		}else if(150<=(b-a) && (b-a)<200){
		int price = 25000*(b-a);
		printf("tien dien la:%d", price);
		}else if(250<=(b-a)){
		int price = 30000*(b-a);
		printf("tien dien la:%d", price);
		}
	}
