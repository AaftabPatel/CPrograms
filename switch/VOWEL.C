#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("please enter a character:"); //taking character
scanf("%c", &ch);
switch(ch)                          //checking in switch case
	{
	case('a'):printf("%c is a vowel");
		 break;
	case('e'):printf("%c is a vowel");
		 break;
	case('i'):printf("%c is a vowel");
		 break;
	case('o'):printf("%c is a vowel");
		 break;
	case('u'):printf("%c is a vowel");
		 break;
	default:printf("%c is a consonent");
	}

getch();
}
