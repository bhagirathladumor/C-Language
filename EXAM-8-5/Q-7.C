#include <stdio.h>
#include <conio.h>

main()
{
	int i,j;

	clrscr();

      for(i=1;i<=5;i++)
      {
	for(j=1;j<=5;j++)
	{
	    if((j==1 || i==3) || (i==2 && j==5)|| (i==1))
	    {
		printf("*");

	    }
	    else
	    {
		 printf(" ");
	    }
	}
		printf("\n");
      }
      getch();


}