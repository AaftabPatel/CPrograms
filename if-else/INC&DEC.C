#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c;
clrscr();
printf("please enter the value to be incremented:");
scanf("%d", &a);

b=a;
b++;
printf("incremented value is: %d \n" ,b);

a--;
c=a;
printf("decremented value is: %d", c);
getch();
}
