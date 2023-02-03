#include <stdio.h>

// function defination 
int square(int num) {
  return num*num;
}

int main(void) {
  int number, result;
  printf("Enter the number: ");
  scanf("%d",&number);

  // function call 
  result = square(number);
  printf("Square of %d = %d\n",number,result);
  return 0;
}