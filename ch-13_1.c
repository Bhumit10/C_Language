//Aim:C program to create a file and write data into file.
//
//Program:
#include<stdio.h>
#include<string.h>

main()
{
	FILE*bhumit;
	char parth[100];
	
	harshit=fopen("bhumit.txt","w");
	
	if(harshit==0)
	{
		printf("file is opening filed...");
	}
	while(strlen(gets(parth))>0)
	{
       fputs(parth,bhumit);
	   fputs("\n",bhumit);		
	}
	printf("file close");
	fclose(bhumit);
}

