#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Contact{
    int id;
	char name[50];
	char phone[12];
	char address[50];
	int status;
};
void displayContact(struct Contact arr[], int size){
	for(int i=0;i<size;i++){
		printf("id: %d\n",arr[i].id);
		printf("ten: %s\n",arr[i].name);
		printf("so dien thoai: %s\n",arr[i].phone);
		printf("dia chi: %s\n",arr[i].address);
		printf("trang thai: %d\n",arr[i].status);
	}
}
int main(){
	char searchName[50];
	int foundIndex, count;
	int searchStatus,found;
	int left,right,middle;
	struct Contact contact1 = {1, "luong ha minh vy", "097468735", "Ha Dong",0};
	struct Contact contact2 = {2, "nguyen van doan", "033976487", "Ha Dong",1};
	struct Contact contactList[50]={contact1, contact2};
	int currentSize=2;
	int choice;
	while(choice !=8){
		printf("..............MENU...............\n");
		printf("1. In toan bo danh sach contact co trong mang contactList\n");
		printf("2. Thuc hien chuc nang them moi contact vao vi tri cuoi cung cua contactList, Thong tin contact do nguoi dung nhap vao\n");
		printf("3. Thuc hien chuc nang cap nhat thong tin cua mot contact\n");
		printf("4. Thuc hien chuc nang xoa mot contact\n");
		printf("5. Thuc hien chuc nang sap xep va in ra danh sach da duoc sap xep\n");
		printf("6. Thuc hien chuc nang tim kiem va in ra thong tin cua contact\n");
		printf("7. Thuc hien chuc nang tim kiem va in ra toan bo contact\n");
		printf("8. ket thuc\n");
		printf("nhap chuc nang can thuc hien");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice){
			case 1:
				displayContact(contactList,currentSize);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				for (int i = 0; i < currentSize - 1; i++) {
			        for (int j = 0; j < currentSize - i - 1; j++) {
			            if (strcmp(contactList[j].name, contactList[j + 1].name) > 0) {
			                struct Contact temp = contactList[j];
			                contactList[j] = contactList[j + 1];
			                contactList[j + 1] = temp;
			            }
			        }
			    }
			    printf("Danh sach contact da duoc sap xep:\n");
			    displayContact(contactList, currentSize);
				break;
			case 6:
				for (int i = 0; i < currentSize - 1; i++) {
			        for (int j = 0; j < currentSize - i - 1; j++) {
			            if (strcmp(contactList[j].name, contactList[j + 1].name) > 0) {
			                struct Contact temp = contactList[j];
			                contactList[j] = contactList[j + 1];
			                contactList[j + 1] = temp;
			            }
			        }
			    }
			    printf("Nhap ten contact muon tim kiem: ");
			    scanf("%s", searchName);
			    left = 0;
			    right = currentSize - 1;
			    found = 0;
			    while (left <= right) {
			        middle = (left + right) / 2;
			        if (strcmp(contactList[middle].name, searchName) == 0) {
			            found = 1;
			            foundIndex = middle;
			            break;
			        } else if (strcmp(contactList[middle].name, searchName) < 0) {
			            left = middle + 1;
			        } else {
			            right = middle - 1;
			        }
			    }
			    if (found) {
			        printf("ID: %d\t", contactList[foundIndex].id);
			        printf("Ten: %s\t", contactList[foundIndex].name);
			        printf("So Dien Thoai: %s\t", contactList[foundIndex].phone);
			        printf("Dia chi: %s\t", contactList[foundIndex].address);
			        printf("Trang Thai: %d\n", contactList[foundIndex].status);
			        printf("-----------------------\n");
			    } else {
			        printf("Khong tim thay contact.\n");
		    	}
				break;
			case 7:
				printf("Nhap trang thai contact muon tim kiem: ");
			    scanf("%d", &searchStatus);
			    found = 0;
			    for (int i = 0; i < currentSize; i++) {
			        if (contactList[i].status == searchStatus) {
			            printf("ID: %d\t", contactList[i].id);
			            printf("Ten: %s\t", contactList[i].name);
			            printf("So Dien Thoai: %s\t", contactList[i].phone);
			            printf("Dia chi: %s\t", contactList[i].address);
			            printf("Trang Thai: %d\n", contactList[i].status);
			            printf("-----------------------\n");
			            found = 1;
			        }
			    }
			    if (!found) {
			        printf("Khong tim thay contact voi trang thai tuong ung.\n");
    			}
				break;
			case 8:
				exit(0);
				default:
					printf("ket thuc chuong trinh");
		}
	}while(1==1);
	return 0;
}
