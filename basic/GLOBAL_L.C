#include<stdio.h>
#include<conio.h>
int a=10;
void func1(){
int a=20;
printf("\nvalue of local a is: %d",a);
}
void main()
{
clrscr();
printf("\nvalue of global a is: %d",a);
func1();
getch();
}