#include <stdio.h>
#include <conio.h>


main()

{       int i;
	clrscr();
	for(i=1;i<=10;i++)
	{

	   if(i%2==0)
	   {

		continue;

	   }

	     printf("%d\t",i);

	}



	getch();
}