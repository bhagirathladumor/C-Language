#include<stdio.h>
#include<conio.h>

main()
{
	char i,j;
	clrscr();
		for(i='e'; i>='a'; i--)
		{
		  for(j=i; j>='a'; j--)
		  {
			printf("%c",j);
		  }
		  printf("\n");
		}

	getch();
}