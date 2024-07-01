#include<stdio.h>
#include<conio.h>
void main()
{
char ch, str[100];
int i;
clrscr();
printf("plese enter the your name:");
gets(str);
printf("please enter the special character you want:");
scanf("%c",&ch);
printf("original name :%s ",str);
str[0]=ch;
printf("\nchanged name :%s ",str);
getch();
}