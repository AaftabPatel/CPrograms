#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("please enter the number to check:");
scanf("%d", &num);
if(num==0)
	printf("0 is neither even nor odd");
else if(num % 2 == 0 )
	printf("%d is even", num);
else
	printf("%d is odd", num);
getch();
}