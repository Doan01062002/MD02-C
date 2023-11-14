#include <stdio.h>
int main() {
  int number;
  printf("Nhap vao cac so nguyen:\n");
  do {
    scanf("%d", &number);
    if (number == 0) {
      break;
    }
    if (number % 3 != 0) {
      continue;
    }
    printf("So nguyen %d chia het cho 3\n",number);
  } while(1==1);
}
