#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res;
clrscr();
printf("please enter the value of a:");
scanf("%d", &a);
printf("please enter the value of b:");
scanf("%d", &b);
res=a*a*a+b*b*b+3*a*b*(a+b);
printf("a+b whole cube is: %d",res);
getch();
}