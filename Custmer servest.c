#include<stdio.h>
main()
{
	int choice, type, type2;
	
	printf("Press 1 For English.\n");
	printf("Press 2 For Hindi.\n");	
	printf("Press 3 For Gujarati.\n");
	
	printf("Enter Your Choice:- ");
	scanf("%d" ,&choice);
	
	switch(choice)
	{
		case 1 :
		     printf("\nPress 1 For Topup.\n");
		     printf("Press 2 For Balance inquiry.\n");
		     printf("Press 3 For chat with manager.\n");
		     
		     printf("\nEnter Your Types:-");
		     scanf("%d",&type);
		     
		     switch(type)
		     {
		     	case 1:printf("\nFor Topup.\n"); break;
		     	case 2:printf("\nPress 2 For Balance inquiry.\n"); break;
		     	case 3:printf("\nPress 3 For chat with manager.\n"); break;
		     	default:printf("\nYou Entered Invalid Choice.\n");		
    	   	 }
			 
			break;
		case 2 :
			 printf("\nTopup ke liye 1 dabaye.\n");
		     printf("Balance Inquiry ke liye 2 dabaye.\n");
	
		     
		     printf("\nEnter Your Types:");
		     scanf("%d",&type2);
		     
		     switch(type2)
		     {
		     	case 1:printf("\nAapne TopUp ka Vikalp select kiya he.\n"); break;
		     	case 2:printf("\n Aapne balace Inquiry ka vikalap select kiya he.\n"); break;
		     	default:printf("\nYou Entered Invalid Choice.\n");		
    	   	 }
			break;
		case 3 :
			 printf("\nTopup karva mate 1 dabavo.\n");
		     printf("Balance janva mate 2 dabavo.\n");
		 
		     
		     printf("\nEnter Your Types:");
		     scanf("%d",&type2);
		     
		     switch(type2)
		     {
		     	case 1:printf("\n Tame topup no Vikalp Select kriyo che.\n"); break;
		     	case 2:printf("\n Tame Balace jova mate no vikalp pasandha karo che.\n"); break;
		     	default:printf("\n Entered Invalid Choice.\n");		
    	   	 }
			break;
		
	    default:
		printf("You Entered Invalid Choice.");		
	}
}
