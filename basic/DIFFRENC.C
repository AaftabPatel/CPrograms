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
res=a*a+b*b-2*a*b;
printf("a-b whole square is:%d",res);
getch();
}