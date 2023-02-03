#include <stdio.h>

int main(void) {
  int num1,num2,temp;
  printf("Enter the numbers: ");
  scanf("%d%d",&num1,&num2);
  printf("Before swaping:\nnum1 = %d\nnum2 = %d\n",num1,num2);
  // using third variable 
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("\n");
  printf("After swaping:\nnum1 = %d\nnum2 = %d",num1,num2);
  return 0;
}