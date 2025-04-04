#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	long int salary, housing = 10, dearness = 5, tax = 8, gross;
	clrscr();

	p("Enter Your Base Salary : ");
	s("%ld",&salary);

	p("House Rent Allowance = %ld\n",salary * housing / 100);

	p("Dearness Allowance = %ld\n",salary * dearness / 100);

	p("Tax Allowance = %ld\n\n",salary * tax / 100);

	gross = salary + housing + dearness + tax;

	p("Gross Salary = %ld",gross);

	getch();
}