#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i, lower=0, upper=0;
clrscr();
printf("plese enter the string you want to check:");
gets(str);
for(i=0;str[i]!='\0';++i)
	{
	if(str[i]>='a' && str[i]<='z')
		lower+=1;
	if(str[i]>='A' && str[i]<='Z')
		upper+=1;

	}
printf("string is:%s\n",str);
printf("number of upper case letters in  string are:%d", upper);
printf("\nnumber of lower case letters in  string are:%d", lower);

getch();
}