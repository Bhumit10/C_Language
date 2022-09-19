//Aim: C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.
//
//Program:
#include<stdio.h>
#include<string.h>

  void bhumit()
{
	int n,i,b;
	char a[1000];
	int ans=0;
	printf("enter you name =");
	gets(a);
	b=strlen(a);
	for(i=b;i>=1;i--)
	{
	     ans++;	
	}
	printf("%d",ans);
}

void main()
{
	int ans;
	bhumit();
}

