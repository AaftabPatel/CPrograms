#include<stdio.h>
#include<conio.h>
void main()
{
int n,ch,res=1,i;
clrscr();
do
{
printf("\nMENU");
printf("\n1=factorial");
printf("\n2=prime check");
printf("\n3=check odd or even");
printf("\n4=exit");
printf("\nplease enter your choice:");
scanf("%d", &ch);

switch(ch)
	{
	case 1: printf("please enter the number whose factoial you want:");
		scanf("%d", &n);
		for(i=1;i<=n;i++)
			res=res*i;
		printf("factorial is: %d", res);
		break;
	case 2: printf("please enter the number you want to check:");
		scanf("%d", &n);
		 for(i=2;i<n;i++)
			{
			if(n%i==0)
			res=0;
			break;
			}
		if (res==0)
			printf("given number is not a prime number");
		else
			printf("given number is a prime number");
		break;
	case 3: printf("please enter the number you want to check:");
		scanf("%d", &n);
		if(n%2==0)
			printf("given number is even");
		else
			printf("given number is odd");
		break;
	case 4: printf("thank you");
		break;
	default:printf("please enter number from above only!!!");
	}
}
while(ch!=4);
getch();
}
