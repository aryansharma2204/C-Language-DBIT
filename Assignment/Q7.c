//Write a program to enter a number and check whether it is prime or not.

#include <stdio.h> 

int main() 
{
  int num, i, c = 0;

  printf("\tAryan Sharma");
  printf("\n");
  printf("Enter any number: ");
  scanf("%d", &num);

  //logic
  for (i = 1; i <= num; i++) {
      if (num % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("%d is a Prime number", num);
  }
  else {
         printf("%d is not a Prime number", num);
  }
  return 0;    
}