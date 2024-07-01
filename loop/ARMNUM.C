#include<stdio.h>
#include<conio.h>
void main()
{
int num, n, rem, res=0;
clrscr();
printf("pleae enter a three digit number you want to check:");
scanf("%d", &n);
num=n;
while(num!=0)
	{
	rem=num%10;
	res+=rem*rem*rem;
	num/=10;
	}
if (res==n)
	printf("%d is a armstrong number", n);
else
	printf("%d is not a armstrong number",n);
getch();
}