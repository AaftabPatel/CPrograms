#include<stdio.h>
#include<conio.h>
long sumofdigit(long n)
{
int m;
if (n!=0)
	return (n%10+sumofdigit(n/10));
else
	return 0;
}
void main()
{
long n, result, m;
clrscr();
printf("pleae enter the number:");
scanf("%ld", &n);
result=sumofdigit(n);
printf("sum of the numbers is: %ld", result);
getch();
}