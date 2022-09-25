Aim:Write C Program to perform a sw. apping of two variables on other variable.

Program:
#include<stdio.h>

main()
{
	  int a,b,c;
	  printf("enter value of a and b");
	  scanf("%d%d",&a ,&b);
	  c=a;
	  a=b;
	  b=c;
	  printf("a=%db=%d",a,b);
}

