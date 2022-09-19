#include<stdio.h>

main()
{
	char k,i,j;

	for(i='A';i<='E';i++)
	{
		for(k='E';k>i;k--)
		{
			printf(" ");
		}
		for(j=i;j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
