Aim:-  Write C program to calculate factorial of a number.

Program:
#include<stdio.h>

main()
{
	int n,ans=1;
	printf("enter value of n");
	scanf("%d",&n);
	
	while(n>=1)
	{
		ans=ans*n;
		printf("%d\n",ans);
		n--;
	}
}

