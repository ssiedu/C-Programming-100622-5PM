#include<stdio.h>
void main()
{
	char str[20];
	printf("\n Enter string : ");
	fgets(str,10,stdin);
	printf("\n string is : %s",str);
	getch();
}
