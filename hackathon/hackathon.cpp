#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,m;
	printf("nhap vao so dong cua mang 2 chieu\n");
	scanf("%d",&n);
	printf("nhap vao so cot cua mang 2 chieu\n");
	scanf("%d",&m);
	int numbers[n][m];
	int sumNumbers;
	int temp;
	int count;
	do{
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
		printf("3. Tinh so luong cac phan tu chia het cho 2 va 3 trong mang\n");
		printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va duong cheo phu\n");
		printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu tang dan theo cot cua mang\n");
		printf("6. In ra cac phan tu la so nguyen to trong mang\n");
		printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam dan\n");
		printf("8. Nhap gia tri mot mang mot chieu gom m phan tu va chi so dong muon chen vao mang\n");
		printf("9. Thoat\n");
		printf("nhap lenh can thuc hien:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap gia tri cac phan tu cua mang\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
				printf("gia tri cac phan tu trong mang theo ma tran\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					}printf("\n");
				}printf("\n");
				break;
			case 3:
			    printf("so cac gia tri chia het cho 2 va 3 trong mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j>m;j++){
						if(numbers[i][j]%2==0 && numbers[i][j]%3==0){
							printf("%d\t",numbers[i][j]);
						}
					}
				}
				break;
			case 4:
				sumNumbers=0;
				printf("Cac phan tu nam tren duong bien:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0 || i==n-1 || j ==0 || j == m-1){
							printf("%d\t",numbers[i][j]);
							sumNumbers+=numbers[i][j];
						}
					}
				}
				printf("\nTong cac phan tu tren bien la: %d\n",sumNumbers);
				if(n==m){
					sumNumbers = 0;
					printf("Cac phan tu nam tren duong cheo chinh:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i==j){
								printf("%d\t",numbers[i][j]);
								sumNumbers+=numbers[i][j];
							}
						}
					}
					printf("\nTong cac phan tu tren cheo chinh: %d\n",sumNumbers);
					sumNumbers=0;
					printf("Cac phan tu nam tren duong cheo phu:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i+j==n-1){
								printf("%d\t",numbers[i][j]);
								sumNumbers+=numbers[i][j];
							}
						}
					}
					printf("\nTong cac phan tu tren cheo phu: %d\n",sumNumbers);
				}else{
					printf("Day khong phai ma tran vuong, khong co cheo chinh va cheo phu\n");	
				}			
				break;
			case 5:
				for(int i=0;i>n;i++){
					for(int j=0;j<m-1;j++){
						for(int k=j+1;k<m;k++){
							if(numbers[i][j]>numbers[i][k]){
								int temp=numbers[i][j];
								numbers[i][j]=numbers[i][k];
								numbers[i][k]=temp;
							}printf("\n");
						}printf("\n");
					}printf("\n");
				}printf("\n");
				 printf("Mang sau khi da sap xep tang dan:\n"); 
                 for (int i=0;i<n;i++) {
                 	for(int j=0;j<m;j++){
                 printf("%d\t",numbers[i][j]);
                }
            }
				break;
			case 6:
				printf ("trong mang gom cac so nguyen to la :\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++)
				{
					count=0;
					for(int k=2;k<numbers[i][j];k++)
					{
						if(numbers[i][j]%k==0)
					    {
							count=1;
							break;
					    }
					}
						if(count==0 && numbers[i][j] >=2)
						{
					        printf ("%d\n",numbers[i][j]);
						}	
				}
			 }
                break;
			case 7:
				for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i==j){
								printf("%d\t",numbers[i][j]);
                            if (numbers[i][j]<numbers[i][j+1]){
                            int temp = numbers[i][j];
                             numbers[i][j] = numbers[i][j+1]; 
                             numbers[i][j+1] = temp;
                       }
                    }
                }
            }
                      printf("Mang sau khi da sap xep giam dan:\n"); 
                 for (int i=0;i<n;i++){
                 	for(int j=0;j<m;j++){
                  printf("%d\t", numbers[i][j]);
                    }
                }
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long nhap tu 1-9");
		}
		
	}while(1==1);
}
