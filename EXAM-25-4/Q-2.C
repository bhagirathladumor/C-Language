#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main() {
	int n, c = 0;
	clrscr();

	p("Erite your number : ");
	s("%d",&n);


	while(n != 0) {
		c++;
		n = n / 10;
	}

	p("digits = %d",c);


	getch();

}