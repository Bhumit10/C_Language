#include<stdio.h>
main()
{
	int n1, n2,i,j, sum = 0;
	n1=5;
	n2=5;
	printf("row and colunm is 5*5\n");
	int a[n1][n2];
	printf("\n");
	for(i = 0; i < n1; i++)
	{
		for(j = 0; j < n2; j++)
		{
		    printf("a[%d][%d]",i,j);
		    scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("matrix\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\nBoundary Matrix\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
			{
				if(i==0 || j==0 || i==n1-1 || j==n2-1)
				{
						printf("%d\t", a[i][j]);
						sum = sum + a[i][j];
				}
			else
			
				printf(" ");
			}
		printf("\n");
	}
	printf("\nSum of boundary is %d", sum);
}
