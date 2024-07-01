#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("please enter first number:");
scanf("%d", &a);
printf("please enter second number:");
scanf("%d", &b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a after swapping is: %d \n", a);
printf("value of b after swapping is: %d", b);
getch();
}