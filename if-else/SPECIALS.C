#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("please enter any character:");
scanf("%c", &ch);
if(ch>=65 && ch<=90)
	printf("entered character is a uppe case letter");
else if(ch>=97 && ch<=122)
	printf("entered character is a lower case letter");
else if(ch>=48 && ch<=57)
	printf("entered character is  a number");
else
	printf("entered character is a 	special symbol");
getch();
}