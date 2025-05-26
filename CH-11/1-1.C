#include<stdio.h>
#include<conio.h>

main()
{
	char i,j;
	clrscr();
		for(i=5; i>=1; i--)
		{
		  for(j=i; j>=1; j--)
		  {
			printf("%c",j+96);
		  }
		  printf("\n");
		}

	getch();
}