#include<stdio.h>
#include<stdlib.h>
int main(){
	do{
		printf("*********MENU********\n");
		printf("1. Pho tom hum\n");
		printf("2. Pho bo kobe\n");
		printf("3. Pho ga viet nam\n");
		printf("4. Xoi trung thit\n");
		printf("5 Banh my trung\n");
		printf("6. My tom khong nguoi lai\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("ban vua chon mon Pho tom hum, vui long doi trong giay lat\n");
				break;
			case 2:
				printf("ban vua chon mon Pho bo kobe, vui long doi trong giay lat\n");
				break;
			case 3:
				printf("ban vua chon mon Pho ga viet nam, vui long doi trong giay lat\n");
				break;
			case 4:
				printf("ban vua chon mon Xoi trung thit, vui long doi trong giay lat\n");
				break;
			case 5:
				printf("ban vua chon mon Banh my trung, vui long doi trong giay lat\n");
				break;
			case 6:
				printf("ban vua chon mon My tom khong nguoi lai, vui long doi trong giay lat\n");
				break;
			case 7:
				exit(choice);
			default:
				printf("vui long chon tu 1 den 7\n");
				}
			}while("vui long chon tu 1 den 7\n");
		}						
