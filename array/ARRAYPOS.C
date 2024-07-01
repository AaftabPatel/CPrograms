#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i, j, pos=0, neg=0, k=0;
clrscr();
for(j=0;j<10;j++)
	{
	printf("please enter the no. at index %d:",j);
	scanf("%d", &a[j]);
	}
for(i=0;i<10;i++)
	{
	if(a[i]==0)
		{
		k+=1;
		continue;
		}
	else if(a[i]>0)
		{
		pos+=1;
		continue;
		}
	else
		{
		neg+=1;
		continue;
		}
	}
printf("number of positive numbers is %d", pos);
printf("\nnumber of negative numbers is %d", neg);
printf("\nnumber of zeros is %d", k);
getch();
}