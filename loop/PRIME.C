#include<stdio.h>
#include<conio.h>
void main()
{
int i=2,num,count=0;
clrscr();
printf("pleae enter the number:");
scanf("%d", &num);
for (;i<=num;i++)
	{
	if (num%i==0)
		count=count+1;
		break;
	}
if (count==0)
	printf("%d is  a prime number", num);
else
	printf("%d is not a prime number", num);
getch();
}