#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	char grade;
	printf("enter your mark : ");
	scanf("%d",&n);

	(n>90)?grade='A':
	(n>=75)?grade='B':
	(n>=60)?grade='C':
	(n>=50)?grade='D':
	(n>=35)?grade='E':
	(n>=0)?grade='F':printf("you are fail");
	printf("grade:%c",grade);


	switch(grade){
		case 'A':
		printf("%c Exlent work:",grade);
		break;
		case 'B':
		
		printf("%c Well done:",grade);
		break;
		case 'C':
		
		printf("%c Good Job:",grade);
		break;
		case 'D':
		
		printf("%c You are just passed but you could do better:",grade);
		break;
		case 'E':
		
		printf("%c just pass",grade);
		break;
		case 'F':
		
		printf("%c sorry you are fail",grade);
		break;

	}
	getch();
}


