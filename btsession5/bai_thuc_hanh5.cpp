#include<stdio.h>
int main(){
	int x, y;
	printf("nhap ngay sinh va thang sinh");
	scanf("%d %d", &x, &y);
	if(x>=21 && y==3||x<=20 && y==4){
		printf("Bach Duong");
	}else if(x>=21 && y==4||x<=20 && y==5){
		printf("Kim Nguu");
	}else if(x>=21 && y==5||x<=21 && y==6){
		printf("Song Tu");
	}else if(x>=22 && y==6||x<=22 && y==7){
		printf("Cu Giai");
	}else if(x>=23 && y==7||x<=22 && y==8){
		printf("Su Tu");
	}else if(x>=23 && y==8||x<=22 && y==9){
		printf("Su Nu");
	}else if(x>=23 && y==9||x<=23 && y==10){
		printf("Thien Binh");
	}else if(x>=24 && y==10||x<=22 && y==11){
		printf("Bo Cap");
	}else if(x>=23 && y==11||x<=21 && y==12){
		printf("Nhan Ma");
	}else if(x>=22 && y==12||x<=19 && y==1){
		printf("Ma Ket");
	}else if(x>=20 && y==1||x<=18 && y==2){
		printf("Bao Binh");
	}else if(x>=19 && y==2||x<=20 && y==3){
		printf("Song Ngu");
	}
}										
