#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("please enter the number:");
scanf("%d", &num);
if(num==0)
	printf("0 is neither positive nor negetive");
else if(num>0)
	printf("%d is a positive number", num);
else
	printf("%d is a negative number", num);
getch();
}