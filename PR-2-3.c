Aim:3. Write C program use switch statement. Display Monday to Sunday.
Ex. User Input: M
output: Monday

Program:
#include<stdio.h>
main()
{
	char day;
	
	printf("Enter first letter of weekday : ");
	scanf("%c", &day);
	
	switch(day)
	{
		case 'M' :
			printf("Monday");
			break;
			
		case 'T' :
			printf("Tuesday");
			break;
			
		case 'W' :
			printf("Wednesday");
			break;
			
		case 't' :
			printf("Thursday");
			break;
			
		case 'F' :
			printf("Friday");
			break;
			
		case 'S' :
			printf("Saturday");
			break;
			
		case 's' :
			printf("Sunday");
			break;
			
		default :
			printf("invalid character");
	}}

