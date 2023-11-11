#include<stdio.h>
int main(){
	// nhap x la tong luong cua nhan vien hang trieu
	float x;
	printf("nhap tong luong cua nhan vien");
	scanf("%f", &x);
	if(x>80000000){
		printf("tien thue la:%f\n luong rong la:%f trieu\n", x*0.35, x-x*0.35);
	}else if(x>52000000){
		printf("tien thue la:%f\n luong rong la:%f trieu\n", x*0.3, x-x*0.3);
	}else if(x>32000000){
		printf("tien thue la:%f\n luong rong la:%f trieu\n", x*0.25, x-x*0.25);
	}else if(x>18000000){
		printf("tien thue la:%f\n luong rong la:%f trieu\n", x*0.2, x-x*0.2);
	}else if(x>10000000){
		printf("tien thue la:%f\n luong rong la:%f trieu\n", x*0.15, x-x*0.15);
	}else if(x>5000000){
		printf("tien thue la:%f\n luong rong la:%f trieu\n", x*0.1, x-x*0.1);
	}else if(x>0){
		printf("tien thue la:%f\n luong rong la:%f trieu\n", x*0.05, x-x*0.05);
		}
	}				
