#include<stdio.h>
#include<conio.h>
void main()
{
char name;
char cname;
clrscr();
printf("please enter your name:");
scanf("%c", &name);
printf("\nplease enter your college:");
scanf("\n%c", &cname);
printf("\nname is:", name);
printf("\ncollege is:", cname);
getch();
}