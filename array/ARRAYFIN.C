#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i, j, n, num=0;
clrscr();
for(j=0;j<10;j++)
	{
	printf("please enter the no. at index %d:",j);
	scanf("%d", &a[j]);
	}
printf("please enter the number you want to find:");
scanf("%d", &n);
for(i=0;i<10;i++)
	{
	if(a[i]==n)
		{
		printf("number found at index %d",i);
		num+=1;
		continue;
		}
	}
if (num==0);
	   printf("number not found!");
getch();
}