#include<stdio.h>

main()
{
	int a,b,c,d;
	for(a=5;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
	
		for(c=a*2;c<5*2;c++)
		{
			printf(" ");
		}
		for(d=a;d>=1;d--)
		{
			printf("%d",d);
		}
		printf("\n");
	}	
}
