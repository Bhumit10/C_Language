#include<stdio.h>
main()
{
	int x,y,z,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	printf("Enter the value of z : ");
	scanf("%d",&z);
	
		ans=x*x*x-y*y*y-z*z*z-3*(y+z)+3*(x-y)-3*(x-z);
	printf("x*x*x-y*y*y-z*z*z-3*(y+z)+3*(x-y)-3*(x-z) : %d",ans);
			
}
