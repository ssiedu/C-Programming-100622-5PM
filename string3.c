#include<stdio.h>
void main()
{
	char str1[20];
	printf("\n Enter string : ");
	scanf("%[^\n]s",str1);
	printf("\n string is : %s",str1);
	getch();
}
