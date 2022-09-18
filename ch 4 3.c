#include<stdio.h>
main()
{
	int x,y,z,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
		ans=x*x-2*x*y+y*y;
	printf("x*x-2*x*y+y*y : %d\n",ans);
}
