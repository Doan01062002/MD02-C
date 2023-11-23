#include<stdio.h>
int core(int x, int y){
	int result=x*y;
	printf("%d x %d = %d\n",x,y,result);
	return result;
	}
int divide(int x, int y){
	int result=x/y;
	if(x%y==0){
		printf("%d : %d = %d\n",x,y,result);
		return result;
	}else{
		printf("%d khong chia het cho %d\n",x,y);
		return result;
	}
}
int main(){
	int a,b,c;
	printf("nhap gia tri a b c la:");
	scanf("%d %d %d",&a,&b,&c);
	int core1=core(a,b);
	int core2=core(a,c);
	int core3=core(b,c);
	int divide1=divide(a,b);
	int divide2=divide(a,c);
	int divide3=divide(b,c);
}
