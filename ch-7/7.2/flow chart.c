#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	int a, b, c;
	clrscr();

	p("Enter First Value : ");
	s("%d",&a);

	p("Enter Second Value : ");
	s("%d",&b);

	p("Enter Third Value : ");
	s("%d",&c);

	if(a == b && b == c && c == a) {
		clrscr();
		p("All are Equal...");
	}
	else if(a == b || b == c || c == a) {
		clrscr();
		p("Both are Equal...");
	}
	else {
		clrscr();
		if(a > b) {
			if(a > c) {
				clrscr();
				p("%d is Maximum",a);
			}
			else{
				clrscr();
				p("%d is Maximum",c);
			}
		}
		else{
			if(b > c) {
				clrscr();
				p("%d is Maximum",b);
			}
			else{
				clrscr();
				p("%d is Maximum",c);
			}
		}
	}

	getch();
}