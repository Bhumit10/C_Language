Aim::Write C program to print multiplication table of any number.

Program:
#include <stdio.h> 
main() 
{ 
int i, num; 
printf("Enter number to print table: "); 
scanf("%d", &num); 
for(i=1; i<=10; i++) 
{ 
printf("%d * %d = %d\n", num, i, (num*i)); 
} 
}

