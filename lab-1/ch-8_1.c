#include<stdio.h>
main()
{
	int n,i;
	printf("Enter how much index you need:- ");
	scanf("%d",&n);
	int a[n];
	printf("Enter all value you need:- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("This is all values:- \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
