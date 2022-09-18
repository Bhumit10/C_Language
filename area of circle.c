#include<stdio.h>
#define PI 3.14
main()
{
	float radius,area;
	
	printf("radius of circle is :");
	scanf("%f",&radius);
	
	area=PI*radius*radius;
    printf("Area of circle is =%.2f",area);
}
