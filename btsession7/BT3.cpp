#include <stdio.h>
int main(){
	int month;
	float interest, money;
	scanf("%f%f%d", &money, &interest, &month);
	//lai suat thang
	float monthInterest=interest/12;
	for(int i=1; i<=month; i++){
		float interestMoney= money*monthInterest;
		printf("tien lai: %.2f\n", interestMoney);
		money=money+interestMoney;
		}
	printf("tien nhan duoc la:%.2f", money);
	

} 
