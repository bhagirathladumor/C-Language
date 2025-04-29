#include<stdio.h>
#include<conio.h>
#define p printf

main() {
	char i = 'A';
	clrscr();


	do{
		p("%c",i);
		i+ = 4;
	}while(i <= 'Z');


	getch();

}