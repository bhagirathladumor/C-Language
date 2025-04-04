#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	float celius, calc;
	clrscr();

	// celsius to Fahrenheit Calculator
	p("Enter Temperature in Celsius : ");
	s("%f",&celius);

	calc = (celius * 1.8) + 32;

	p("The Temperature in Fahrenheit = %.1f",calc);

	getch();
}