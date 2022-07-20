#include<stdio.h>
#include<string.h>
void main()
{
	int len;
	char str[20];
	printf("\n Enter string : ");
	gets(str);
	len = strlen(str);
	printf("\n string length is : %d",len);
	getch();
	
}
