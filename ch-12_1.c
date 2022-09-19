//Aim:Write a program to add two distances in inch-feet using structure. The values of the     distances is to be taken from the user.
//
//Program:
#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} d1, d2, f1;

void main()
 {
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   
   f1.feet = d1.feet + d2.feet;
   f1.inch = d1.inch + d2.inch;

   while (f1.inch >= 12.0) 
   {
      f1.inch = f1.inch - 12.0;
      f1.feet++;
   }
   printf("\nSum of distances = %d\'-%.1f\"", f1.feet, f1.inch);
}
