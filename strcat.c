#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter string1 : ");
	gets(str1);
	printf("\n Enter string2 : ");
	gets(str2);
	strcat(str1,str2);
	printf("\n string 1 is : %s",str1);
	printf("\n string 2 is : %s",str2);
	getch();
}
