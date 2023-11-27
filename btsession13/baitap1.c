#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n=0;
	char str[100];
	int starNum1, starNum2;
	do{
		printf("MENU\n");
		printf("1. Nhap vao ky tu\n");
		printf("2. In ra do dai chuoi va noi dung vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao ky tu: ");
				scanf("%s",&str);
				break;
			case 2:
				printf("Do dai chuoi: %d\n",strlen(str));
				printf("Chuoi vua nhap: %s\n",str);
				break;
			case 3:
			    printf("chuoi dao nguoc la:\n");
				for(int i=strlen(str)-1;i>=0;i--){
				printf("%c",str[i]);
				}
				break;
			case 4:
				starNum1=0;
			    for(int i=0;i<str[n];i++){
			    	if(str[i]>= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
			    		starNum1++;
			    	}
			    }
			    printf("So luong ki tu chu cai trong chuoi la: %d\n",starNum1);
				break;
			case 5:
				starNum2=0;
				for(int i=0;i<str[n];i++){
			    	if(str[i]>= '0' && str[i] <= '9'){
			    		starNum2++;
			    	}
			    }
			    printf("So luong ki tu chu so trong chuoi la: %d\n",starNum2);
				break;
			case 6:
				printf("So luong ki tu dac biet trong chuoi la: %d\n",strlen(str)-starNum1-starNum2);
				break;
			case 7:
				exit(0);
				default:
					printf("nhap tu 1-7");
				}
			}while(1==1);
	}
