#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main() {
	int first, second, third;
	clrscr();

	p("Enter First Angle : ");
	s("%d",&first);

	p("Enter Second Angle : ");
	s("%d",&second);

	third = first + second;
	third = 180 - third;

	p("Third Angle : %d",third);

	getch();
}