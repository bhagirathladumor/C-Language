#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf


int main()
{
	int n, last,sum;
	clrscr();

	p("Enter the number:");
	s("%d",&n);

	last=n%10;

	while (n>9)
		{
		   n=n/10;
		}

		sum=n+last;
		p("Sum of 1st and last digit=%d",sum);

	getch();

}