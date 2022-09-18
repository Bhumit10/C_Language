#include<stdio.h>
main()
{
	float a,b,c,d;
	printf("Enter amount : ");
	scanf("%f",&a);
	
	printf("Enter the rate of interest : ");
	scanf("%f",&b);
	
	printf("Enter Years : ");
	scanf("%f",&c);
	
	d=(a*b*c)/100;
	
	printf("Simple Interest : %f",d);
		
	
}
