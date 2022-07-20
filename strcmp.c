#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter string 1 : ");
	gets(str1);
	printf("\n Enter string 2 : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("\n str1 is equal to str2");
	else
	printf("\n str1 is not equal to str2");
	getch();
	
}
