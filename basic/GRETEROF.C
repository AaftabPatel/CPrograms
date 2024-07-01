#include<stdio.h>
#include<conio.h>
void main()
{
int n1, n2;
clrscr();
printf("please enter the first number:");
scanf("%d", &n1);
printf("please enter the second number:");
scanf("%d", &n2);
if(n1>n2)
	printf("%d is greater than %d", n1, n2);
else if(n2>n1)
	printf("%d is greater than %d", n2, n1);
else
	printf("%d and %d are equal", n1, n2);
getch();
}