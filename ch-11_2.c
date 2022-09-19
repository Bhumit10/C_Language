//Aim :C program to input and print array elements using pointers
//
//Program:
#include<stdio.h>

void bhumit()
{
	int i,n;
	printf("array of size =");
	scanf("%d",&n);
	
	int a[n];
    int *b=&a;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}
void main()
{
	bhumit();
}

