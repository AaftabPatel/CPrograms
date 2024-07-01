#include<stdio.h>
#include<conio.h>
void main()
{
long n, rev=0, rem;
clrscr();
printf("pleae enter the number whose reverse you want:");
scanf("%ld", &n);
while (n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n/=10;
	}
printf("revered of the numbers is: %ld", rev);
getch();
}