#include<stdio.h>
#include<conio.h>
void main()
{
int n1, n2, n3;
clrscr();
printf("please enter the first number:");
scanf("%d", &n1);
printf("please enter the second number:");
scanf("%d", &n2);
printf("please enter the second number:");
scanf("%d", &n3);
if((n1==n2) && (n2==n3))
	printf("all three numbers are equal");
else if((n1>n2) && (n1>n3))
	printf("%dis greatest ", n1);
else if((n2>n1) && (n2>n3))
	printf("%d is greatest", n2);
else
	printf("%d is greatest", n3);
getch();
}