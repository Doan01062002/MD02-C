#include <stdio.h>
int main(){
    int a, b;
    printf("nhap luong co ban\n");
    scanf("%d", &a);
    printf("nhap so ngay cong thuc te\n");
    scanf("%d", &b);
    if (b>26){
        b=26+(b-26)*1,5;}
    int wage=a*b/26;
    printf("luong cua nhan vien thang nay la: %.3f",wage);
}
