//Aim:. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//3.An additional surcharge of 20% is added to the bill
//
//Program:
#include<stdio.h>
main()
{
	int unit;
	float amt, total;
	
	printf("Enter Electricity Unit : ");
	scanf("%d", &unit);
	
	if(unit <= 50)
		amt = unit * 0.50;
		
	else if(unit <= 150)
		amt = unit * 0.75;
		
	else if(unit <= 250)
		amt = unit * 1.20;
		
	else
		amt = unit * 1.50;
		
	total = amt + (amt * 0.20);
	
	printf("Total payable amount is : %f", total);
	
	
}


