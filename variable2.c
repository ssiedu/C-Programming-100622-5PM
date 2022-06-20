#include<stdio.h>
int b=10;//global variable
void main()
{
	int a1=5;//local variable
	printf("\n value of a : %d",a1);
	printf("\n value of b : %d",b);
	getch();
}
