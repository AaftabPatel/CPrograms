#include<stdio.h>
#include<conio.h>
void main()
{
long n, sum=0, fdigit,ldigit;
clrscr();
printf("pleae enter the number:");
scanf("%ld", &n);
ldigit=n%10;
fdigit=n;
while (n>=10)
	{
	n/=10;
	}
fdigit=n;
sum=fdigit+ldigit;
printf("sum of the first and last numbers is: %ld", sum);
getch();
}