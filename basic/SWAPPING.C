#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("please enter first number:");
scanf("%d", &a);
printf("please enter second number:");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("value of a after swapping is: %d \n", a);
printf("value of b after swapping is: %d", b);
getch();
}