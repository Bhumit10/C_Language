
#include<stdio.h>
#include<string.h>

void bhumit()
{
	char a[100];
	int s;
	printf("enter you name =");
	gets(a);
	
	int *b=&a;
	s=strlen(b);
	printf("%d",s);
}
main()
{
	bhumit();
}

