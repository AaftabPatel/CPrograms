#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();

printf("please enter ascii value of any character:");
scanf("%d", &n);
printf("character of ASCII value of'%d'", n);
printf("is: %c", n);

getch();
}