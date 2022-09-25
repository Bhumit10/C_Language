#include<stdio.h>
main()
{
    int a,b;
    
    printf("enter value of a and b=");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a= %db= %d",a,b);
}

