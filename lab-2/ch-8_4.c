#include<stdio.h>

main()
{
	int i,j,n1,n2;
	printf("enter value of row=");
	scanf("%d",&n1);
	printf("enter value of column=");
	scanf("%d",&n2);
	printf("\n");
	int a[n1][n2],b[n1][n2],c[n1][n2];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("enter value a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n1;i++)
     	{
	     	for(j=0;j<n2;j++)
		    {
			   printf("enter value b[%d][%d]",i,j);
			   scanf("%d",&b[i][j]);
		    }
	    }
	printf("\n");
	    printf("matrix\n");
		for(i=0;i<n1;i++)
	     {
	      	for(j=0;j<n2;j++)
	     	{
		     	c[i][j]=a[i][j]+b[i][j];
		     	printf("%d\t",c[i][j]);
	     	}
	     	printf("\n");
	     }
	   
	     
	     
	     
	
}
