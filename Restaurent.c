#include<stdio.h>
main()
{
	int choice, type, type2;
	
	printf("Press 1 For Sandwich.\n");
	printf("Press 2 For Burgar.\n");	
	printf("Press 3 For Pizza.\n");
	printf("Press 4 For Vadapav.\n\n");
	
	printf("Enter Your Choice:- ");
	scanf("%d" ,&choice);
	
	switch(choice)
	{
		case 1 :
		     printf("\nPress 1 For Gril Sandwich.\n");
		     printf("Press 2 For Cheese Gril Sandwich.\n");
		     printf("Press 3 For Mayonnaise Gril Sandwich.\n");
		     
		     printf("\nEnter Your Types:-");
		     scanf("%d",&type);
		     
		     switch(type)
		     {
		     	case 1:printf("\nYou Ordered Gril Sandwich.\n"); break;
		     	case 2:printf("\nYou Ordered Cheese Gril Sandwich.\n"); break;
		     	case 3:printf("\nYou Ordered Mayonnaise Gril Sandwich.\n"); break;
		     	default:printf("\nYou Entered Invalid Choice.\n");		
    	   	 }
			 
			break;
		case 2 :
			 printf("\nPress 1 For nStuffed Bean Burger.\n");
		     printf("Press 2 For Potato Corn Burger.\n");
		     printf("Press 3 For Pizza Burger.\n");
		     
		     printf("\nEnter Your Types:");
		     scanf("%d",&type2);
		     
		     switch(type2)
		     {
		     	case 1:printf("\nYou Ordered Stuffed Bean Burger.\n"); break;
		     	case 2:printf("\nYou Ordered Potato Corn Burger.\n"); break;
		     	case 3:printf("\nYou Ordered Pizza Burger.\n"); break;
		     	default:printf("\nYou Entered Invalid Choice.\n");		
    	   	 }
			break;
		case 3 :
			 printf("\nPress 1 For Thin Crust.\n");
		     printf("Press 2 For Cheese Burst.\n");
		     printf("Press 3 For Fresh Dough.\n");
		     
		     printf("\nEnter Your Types:");
		     scanf("%d",&type2);
		     
		     switch(type2)
		     {
		     	case 1:printf("\nYou Ordered Thin Crust.\n"); break;
		     	case 2:printf("\nYou Ordered Cheese Burst.\n"); break;
		     	case 3:printf("\nYou Ordered Fresh Dough.\n"); break;
		     	default:printf("\nYou Entered Invalid Choice.\n");		
    	   	 }
			break;
		case 4 :
		     printf("\nPress 1 For Jumbo Vadapav.\n");
		     printf("Press 2 For cheesee Vadapav.\n");
		     printf("Press 3 For Mayonise Vadapav.\n");
		     
		     printf("\nEnter Your Types:");
		     scanf("%d",&type2);
		     
		     switch(type2)
		     {
		     	case 1:printf("\nYou Ordered Jumbo Vadapav.\n"); break;
		     	case 2:printf("\nYou Ordered cheesee Vadapav.\n"); break;
		     	case 3:printf("\nYou Ordered Mayonise Vadapav.\n"); break;
		     	default:printf("\nYou Entered Invalid Choice.\n");		
    	   	 }
			break;	
	    default:
		printf("You Entered Invalid Choice.");		
	}
}
