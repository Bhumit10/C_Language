#include<stdio.h>

main()
{
     int n1,n2,i,j;
    
     
    printf("enter value of row=");
    scanf("%d",&n1);
    printf("enter value of colunm=");
    scanf("%d",&n2);
    int a[n1][n2];
    int sum[9]={0};
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
         printf("a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        sum[j]+=a[i][j];
        }
         
    }
    printf("\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
          printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n1;i++)
    {
    printf("sum of row=%d\n",sum[i]);
    }
    
}
