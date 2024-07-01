#include<stdio.h>
#include<conio.h>
void main()
{
long n, sum=0, m;
clrscr();
printf("pleae enter the number:");
scanf("%ld", &n);
while (n>0)
	{
	m=n%10;
	sum=sum+m;
	n/=10;
	}
printf("sum of the numbers is: %ld", sum);
getch();
}