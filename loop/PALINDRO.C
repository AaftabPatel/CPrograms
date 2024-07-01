#include<stdio.h>
#include<conio.h>
void main()
{
long n, m, rev=0, rem;
clrscr();
printf("pleae enter the number whose reverse you want:");
scanf("%ld", &n);
m=n;
while (n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n/=10;
	}
if(rev==m)
	printf("given number is a plalindrome.");
else
	printf("entered number is not a palindrome");
getch();
}