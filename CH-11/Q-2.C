#include<stdio.h>
#include<conio.h>

main()
{
	char i,j;
	clrscr();
		for(i=1; i<=5; i++)
		{
		  for(j=i; j>=1; j--)
		  {
			printf("%c",j+64);
		  }
		  printf("\n");
		}

	getch();
}