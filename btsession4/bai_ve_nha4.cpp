#include<stdio.h>
int main(){
	int year;
	char caculation;
	printf("nhap nam:");
	scanf("%d", &year);
	fflush(stdin);
	printf("nhap thang:");
	caculation=getchar();
	switch(caculation){
		case'1':
			printf("so ngay trong thang nay la 31");
			break;
		case'2':
			if(year%4==0){
			printf("so ngay trong thang nay la 29");
			}else{
			printf("so ngay trong thang nay la 28");}
			break;
		case'3':
			printf("so ngay trong thang nay la 31");
			break;
		case'4':
			printf("so ngay trong thang nay la 30");
			break;
		case'5':
			printf("so ngay trong thang nay la 31");
			break;
		case'6':
			printf("so ngay trong thang nay la 30");
			break;
		case'7':
			printf("so ngay trong thang nay la 31");
			break;
		case'8':
			printf("so ngay trong thang nay la 31");
			break;
		case'9':
			printf("so ngay trong thang nay la 30");
			break;
		case'10':
			printf("so ngay trong thang nay la 31");
			break;
		case'11':
			printf("so ngay trong thang nay la 30");
			break;
		case'12':
			printf("so ngay trong thang nay la 31");
			break;
		default:
			printf("nam hoac thang khong hop le");
			}
		}							
