#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i ,n;
for(i=1;i<=10;1++)
	{
	printf("please enter the %d no.",i);
	scanf("%d", &a[i]);
	}
printf("please enter the number you want to search");
scanf("%d", &n);
for(i=1;i<=10;i++)
	{
	if(a[i]==n)
		{
		printf("number is found at index %d",i);
		continue;
		}
	else
		printf("number not found!");
	}
getch();
}