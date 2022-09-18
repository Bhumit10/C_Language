#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter value of a :");
	scanf("%d",&a);
	
	printf("Enter value of b :");
	scanf("%d",&b);
	
	printf("\nAddition = %d\n",a+b);
	printf("Subtraction = %d\n",a-b);
	printf("Multiplication = %d\n",a*b);
	printf("Division = %d\n",a/b);
	  c=a%b;
	printf("Modulus = %d",c);
	
}
