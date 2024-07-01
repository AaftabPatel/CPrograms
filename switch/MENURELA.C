#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int n1,n2,rem;
clrscr();
printf("\nMENU");
printf("\n1=is equal to");
printf("\n2=not equal to");
printf("\n3=greater than");
printf("\n4=greater than equal to");
printf("\n5=less than");
printf("\n6=less than equal to");

printf("\nplease enter your choice:");
scanf("%d", &ch);

printf("please enter the first number:");
scanf("%d", &n1);

printf("please enter the second number:");
scanf("%d", &n2);

switch(ch)
	{
	case 1:if(n1==n2)
		  printf("%d is equal to %d",n1,n2);
	       else
		  printf("%d is not equal to %d",n1,n2);
	       break;
	case 2:if(n1!=n2)
		  printf("%d is equal to %d",n1,n2);
	       else
		  printf("%d is not equal to %d",n1,n2);
	       break;
	case 3: if(n1>n2)
		  printf("%d is equal to %d",n1,n2);
	       else
		  printf("%d is not equal to %d",n1,n2);
	       break;
	case 4:if(n1>=n2)
		  printf("%d is equal to %d",n1,n2);
	       else
		  printf("%d is not equal to %d",n1,n2);
	       break;
	case 5:if(n1<n2)
		  printf("%d is equal to %d",n1,n2);
	       else
		  printf("%d is not equal to %d",n1,n2);
	       break;
	case 6:if(n1<=n2)
		  printf("%d is equal to %d",n1,n2);
	       else
		  printf("%d is not equal to %d",n1,n2);
	       break;

	default:printf("please enter the correct number!!!");
	}


getch();
}
