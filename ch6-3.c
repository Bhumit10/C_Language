Aim:Write C program to count number of digits in a number.

Program:
#include <stdio.h>
main() 
{
  
  int count = 0,n;
  printf("Enter an integer: ");
  scanf("%lld", &n);
  do  
  {
    n /= 10;
    count++;
  } 
  while (n != 0);

  printf("Number of digits: %d", count);
}

