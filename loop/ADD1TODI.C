#include<stdio.h>
#include<conio.h>
void main()
{
long num,sum,i,number,count=0,n=1;
clrscr();
printf("pleae enter the number:");
scanf("%ld", &num);
number=num;
while (number!=0)
	{
	number=number/10;
	count=count+1;
	}
for(i=1;i<count;i++)
	{
	n=n*10;
	n=n+1;
	}
sum=num+n;
printf("result of the addition of 1 to each digit is: %ld", sum);
getch();
}