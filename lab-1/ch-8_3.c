#include<stdio.h>
main()
{
	int n,i,b=0;
	float avg;
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
		b=b+a[i];
	}
	avg=(b/n);
	printf("%f is the average value",avg);
}
