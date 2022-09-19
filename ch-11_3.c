//Aim:C program to reverse an array using pointers
//Program:
#include<stdio.h>

void bhumit()
{
	int i,n;
	printf("enter you size of array= ");
	scanf("%d",&n);
	
	int a[n];
	int *b=&a;
    printf("\n");	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&b[i]);
	}
	printf("\nreverse\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",b[i]);
	}
}
main()
{
	bhumit();
}

