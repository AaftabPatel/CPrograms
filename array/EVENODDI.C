#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i, j, even=0, odd=0, k=0;
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
	else if(a[i]%2==0)
		{
		even+=1;
		continue;
		}
	else
		{
		odd+=1;
		continue;
		}
	}
printf("number of odd numbers is %d", odd);
printf("\nnumber of even numbers is %d", even);
printf("\nnumber of zeros is %d", k);
getch();
}