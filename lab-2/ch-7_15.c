#include<stdio.h>

main()
{
	char k,i,j;

	for(i='E';i>='A';i--)
	{
		for(k='E';k>i;k--)
		{
			printf(" ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
