//Aim:C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.
//
//Program:
#include<stdio.h>
void array(int m[])
{
   int i,sum;
   for(i=0;i<5;i++)
   {
      sum=sum+m[i];
   
   }
    printf("sum = %d ",sum);
}

void main ()
{
     int a;
    int i;
     printf("ente you 5 value\n "); 
    int b[5];
    for(i=0;i<5;i++)
    {
         printf("a[%d]",i);
         scanf("%d",&b[i]);  
    }
    printf("\n");
    
     array(b);
}

