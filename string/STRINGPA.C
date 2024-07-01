#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100],rev[100];
int i,cmp;
clrscr();
printf("plese enter the string you want to check:");
gets(str);
strcpy(rev,str);
strrev(str);
cmp=strcmp(str,rev);
if(cmp==0)
	printf("given string is a palindrome");
else
	printf("given string is not a palidrome");
getch();
}