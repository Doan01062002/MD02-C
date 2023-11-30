#include<stdio.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
int main(){
	int a=5,b=8;
	int *ptr1=&a;
	int *ptr2=&b;
	printf("hieu truoc khi dao la:%d\n",a-b);
	swap(&a,&b);
	printf("hieu sau khi dao la:%d",a-b);
}
