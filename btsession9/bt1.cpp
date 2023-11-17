#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int numbers[100], currentIndex=0;
	int n;
	do{
		printf("**********MENU*******\n");
		printf("1. nhap so phan tu can nhap va gia tri ca phan tu\n");
		printf("2. in ra cac gia tri dang quan ly\n");
		printf("3. in ra cac phan tu chan va tinh tong\n");
		printf("4. in ra gia tri lon nhat va gia tri nho nhat trong mang\n");
		printf("5. in ra cac phan tu la so nguyen to trong mang va tinh tong\n");
		printf("6. nhap vao mot so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7. them mot phan tu vao vi tri chi dinh\n");
		printf("8. thoat\n");
	int choice;
	printf("nhap mot yeu cau tu 1 den 8\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("nhap so phan tu muon them la");
	        scanf("%d", &n);
	        for(int i=0;i<n;i++,currentIndex++){
		    printf("numbers[%d]=",currentIndex);
		    scanf("%d",&numbers[currentIndex]);
		    }break;
	    case 2:
            printf("ca gia tri dang quan ly la\n");
			for(int i=0;i<currentIndex;i++){
				printf("numbers[%d]= %d\n",i,numbers[i]);
				}break;
		case 3:
			int sum;
			for(int i=0;i<currentIndex;i++){
				if(numbers[i]%2==0){
					printf("so chan la: %d\n", numbers[i]);
					sum=sum+numbers[i];
				}	
				}printf("tong cac so chan la %d:\n",sum);
				break;
		case 4:
			int max, min;
			max=numbers[0], min=numbers[0];
			for(int i=0;i<currentIndex;i++){
			if(numbers[i]<min){
				min=numbers[i];}
			for(int i=0;i<currentIndex;i++){
			if(numbers[i]>max){
				max=numbers[i];}
			}
			}printf("gia tri nho nhat la: %d\n gia tri lon nhat la: %d\n", min, max);
			break;
		case 5:
		int divisor;	
		printf("Cac so nguyen to trong mang la:");
				for(int i=0;i<currentIndex;i++){
					divisor=0;
					for(int j=1;j<=sqrt(numbers[i]);j++){
						if(numbers[i]%j==0){
							divisor++;
						}
					}
					if(divisor==1){
						printf("arr[%d]\n",numbers[1]);
						sum+=numbers[i];
					}
				}
				printf("Tong cac so nguyen to trong mang la: %d\n",sum);
				break;
		case 6:
			int value;
			printf("nhap gia tri can tim kiem");
			scanf("%d",&value);
			for(int i=0;i<=currentIndex-1;i++){
				if(numbers[i]==value){
					printf("cac gia tri tuong tu co trong mang la: numbers[%d]=%d\n",i,numbers[i]);
					}
	            }
	    case 8:
				exit(0);
			default:
				printf("Khong hop le");				
				}
}while(1==1);
}

