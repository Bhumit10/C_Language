//Aim :C program to read a file and display its contents.
//
//Program:
#include<stdio.h>
#include<string.h>

main()
{
	FILE*harshit;
	char parth[100];
	
	harshit=fopen("bhumit.txt","r");
	
	if(harshit==0)
	{
		printf("file is opening filed...");
	}
	while(fgets(parth,100,harshit)>0)
	{
      printf("%s",parth);
	  printf("\n");	
	}
	printf("file close");
	fclose(harshit);
}

