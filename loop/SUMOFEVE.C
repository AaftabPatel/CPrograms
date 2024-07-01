#include<stdio.h>
#include<conio.h>
void main()
{
int i=1, j=2, sum1=0, sum2=0;
clrscr();
while (i<=50,j<=50)
	{
	sum1=sum1+i;
	sum2=sum2+i;
	i=i+2;
	j=j+2;
	}
printf("sum of even numbers is: %d", sum2);
printf("\nsum of odd numbers is: %d", sum1);
getch();
}