#include<stdio.h>
#include<conio.h>
void main()
{
char op;
int n1,n2,rem;
clrscr();
printf("please enter the arithematic operator:");
scanf(" %c", &op);

printf("please enter the first number:");
scanf("%d", &n1);

printf("please enter the second number:");
scanf("%d", &n2);

switch(op)
	{
	case('+'):rem=n1+n2;
		  printf("sum is: %d", rem);
		  break;
	case('-'):rem=n1-n2;
		  printf("diffrence is: %d", rem);
		  break;
	case('*'):rem=n1*n2;
		  printf("product is: %d", rem);
		  break;
	case('/'):rem=n1/n2;
		  printf("dividion is: %d", rem);
		  break;
	case('%'):rem=n1%n2;
		  printf("moodulus is: %d", rem);
		  break;
	default:printf("please enter the correct operator!!!");
	}


getch();
}
