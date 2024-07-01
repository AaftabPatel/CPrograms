#include<stdio.h>
#include<conio.h>
void main()
{
int uch, lch;
clrscr();
printf("please enter any upper case alphabet:");
scanf("%c", &uch);
lch=uch+32;
printf("lower case value is: %c",lch);
getch();
}