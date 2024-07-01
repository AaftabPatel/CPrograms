#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();

printf("please enter any character:");
scanf("%c", &ch);
printf("ASCII value of'%c'", ch);
printf("is: %d", ch);

getch();
}