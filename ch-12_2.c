//Aim : Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a Union named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
//
//Program:
#include <stdio.h>

struct Marks {
    int roll_no;
    char name[30];
    int chem_marks, maths_marks, phy_marks;
};

void main() 
{
	int i;
    struct Marks marks[5];
    
    for(i=0; i<5; i++)
	{
		printf("Student %d\n",i+1);
        printf("Enter roll no. :");
        scanf("%d", &marks[i].roll_no);
        
        printf("Enter name :");
        scanf("%s",marks[i].name);
        
        printf("Enter Chemistry marks :");
        scanf("%d", &marks[i].chem_marks);
        
        printf("Enter Maths marks :");
        scanf("%d", &marks[i].maths_marks);
        
        printf("Enter Physics marks :");
        scanf("%d", &marks[i].phy_marks);
        
        printf("\n");
    }
    
	for(i=0; i<4; i++)
	{
	    printf("Student %d\n",i+1);
	    int percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
	    printf("Percentage : %d\n\n", percentage);
	}
}

