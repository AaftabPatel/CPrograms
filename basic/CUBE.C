#include<stdio.h>
#include<conio.h>
void main()
{
int n, res;
clrscr();
printf("please enter the number you want the cube:");
scanf("%d", &n);
res=n*n*n;
printf("cube of the number: %d", res);
getch();
}