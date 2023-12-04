#include<stdio.h>
#include<string.h>
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
int searchContact(struct Contact arr[], int size, char answer[50])
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].name, answer) == 0)
        {
            index = i;
        }
    }
    return index;
int main(){
	struct Contact contact1 = {1, "luong ha minh vy", "097468735", "Ha Dong",0};
	struct Contact contact2 = {2, "nguyen van doan", "033976487", "Ha Dong",1};
	struct Contact contactList[50]={contact1, contact2};
	int currentSize=2;
	int choice;
	while(choice !=8){
		printf("..............MENU...............\n");
		printf("1. In toan bo danh sach contact co trong mang contactList");
		printf("2. Thuc hien chuc nang them moi contact vao vi tri cuoi cung cua contactList, Thong tin contact do nguoi dung nhap vao\n");
		printf("3. Thuc hien chuc nang cap nhat thong tin cua mot contact\n");
		printf("4. Thuc hien chuc nang xoa mot contact\n");
		printf("5. Thuc hien chuc nang sap xep va in ra danh sach da duoc sap xep\n");
		printf("6. Thuc hien chuc nang tim kiem va in ra thong tin cua contact\n");
		printf("7. Thuc hien chuc nang tim kiem va in ra toan bo contact\n");
		printf("8. ket thuc\n");
		scanf("%d",&choice);
		fflush(stdin);
		printf("nhap chuc nang can thuc hien");
		switch(choice){
			case 1:
				displayContact(contactList,currentSize);
				break;
			case 2:
				struct Contact newContact;
				printf("nhap id: ");
				scanf("%d",&newContact.id);
				fflush(stdin);
				printf("nhap ten: ");
				gets(newContact.name);
				printf("nhap so dien thoai: ");
				gets(newContact.phone);
				printf("nhap dia chi: ");
				gets(newContact.address);
				printf("nhap status: ");
				scanf("%d",&newContact.status);
				contactList[currentSize]=newContact;
				currentSize++;
				displayContact(contactlist, currentSize);
				break;
			case 3:
				char answer[100];
                printf("Nhap vao contact muon chinh sua: \n");
                gets(answer);
                int updateContact = searchContact(contactList, currentSize, answer);
                if (updateContact != -1)
                {
                    printf("nhap vao ten cua contact can cap nhat\n");
                    gets(contactList[updateContact].name);

                    printf("nhap vao so dien thoai can cap nhat\n");
                    gets(contactList[updateContact].phone);

                    printf("nhap dia chi can cap nhat\n");
                    gets(contactList[updateContact].address);
                    fflush(stdin);

                    displayContact(contactList, currentSize);
                }
				break;
			case 4:
				
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				default:
					printf("ket thuc chuong trinh");
		}
	}
	return 0;
}
