//Aim:C program to find factorial of number using recursion.
//
//Program:
#include<stdio.h>
int  array(int m)
{
     if(m<=1)
    {
      return 1;
    }
    else
    {
       return m*array(m-1);
    }
}

void main ()
{
     int b,ans;
    printf("enter you factorial number= ");
         scanf("%d",&b);  
    
    printf("\n");
    
  ans= array(b);
printf("%d",ans);
    
}

