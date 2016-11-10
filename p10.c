#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i;
	char s[20],*items[10]={"ac",
		       "led",
		       "washing machine",
		       "oven",
		       "moter",
		       "fan",
		       "dvd player",
		       "laptop",
		       "light",
		       "mp3"};
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("%d)",i+1);
		puts(items[i]);
	}

	printf("Enter item to search = ");
	gets(s);
	strlwr(s);

	for(i=0;i<10;i++)
	{
		if(!strcmp(s,items[i]))
		{
			printf("\nFound");
			break;
		}
	}
	if(i==10)
	{
		printf("\nNot Found!!");
	}

getch();
}
