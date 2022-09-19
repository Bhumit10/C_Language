#include<stdio.h>
main()
{
	int n,m,i,j=0,k=0;
    
	printf("Enter how many index you need in A array:- ");
	scanf("%d",&n);
	printf("Enter how many index you need in B array:- ");
	scanf("%d",&m);
	
	int a[n],b[m],c[n+m];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n+m;i++)
	{
		if(j<n)
		{
			c[i]=a[j];//c[4]=a[4]
			j++;//a[5]
		}
		else if(k<n)
		{
			c[i]=b[k];//c[9]=b[4]
			k++;//b[4]
		}
	}
	
	for(i=0;i<n+m;i++)
	{
		printf("%d is c[%d] \n",c[i],i); //1 is c[0]
	}
}
