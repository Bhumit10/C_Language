//Aim:C program to swap two numbers using pointers
//
//Program:
#include<stdio.h>
void  bhumit(int *c,int *d)
{ 
      int e,f,i;
      int *g=&e;
      int *h=&f;
      i=*c;
      e=*c=*d;
      f=*d=i;
      printf("a= %d\n",*g);
      printf("b= %d",*h);      
      
      
}
int  main()
{
    int a,b;
	printf("enter you a= ");
	scanf("%d",&a);
	printf("netr you b= ");
	scanf("%d",&b);
	
	bhumit(&a,&b);	
}  

