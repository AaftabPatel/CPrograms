#include<stdio.h>
#include<conio.h>
void main()
{
int uch, lch;
clrscr();
printf("please enter any lower case alphabet:");
scanf("%c", &lch);
uch=lch-32;
printf("upper case value is: %c",uch);
getch();
}