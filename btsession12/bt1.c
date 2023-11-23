#include<stdio.h>
int sum(int x, int y){
	int result=x+y;
	printf("%d + %d = %d\n",x,y,result);
	return result;
}
int signal(int x,int y){
	if(x>y){
		int result=x-y;
		printf("%d - %d = %d\n",x,y,result);	
		return result;
	}else{
		int result=y-x;
		printf("%d - %d = %d\n",y,x,result);
		return result;
	}
}
int main(){
	int a,b,c;
	printf("Nhap vao ba so a,b,c\n ");
	scanf("%d %d %d",&a,&b,&c);
	int total1=sum(a,b);
	int total2=sum(b,c);
	int total3=sum(c,a);
	int signal1=signal(a,b);
	int signal2=signal(b,c);
	int signal3=signal(c,a);
}
