#include<stdio.h>
#define PI 3.14
main()
{
	float radius,perimeter;
	
	printf("radius of circle is :");
	scanf("%f",&radius);
	
	perimeter=PI*radius*2;
    printf("perimeter of circle is =%.2f",perimeter);
}
