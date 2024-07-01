#include<stdio.h>
#include<conio.h>
void hello()
{
printf("hello");
}
void main()
{
void *p;
clrscr();
p=hello;
printf("address of function hello is: %p", p);
getch();
}