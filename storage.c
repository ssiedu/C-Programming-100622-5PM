#include<stdio.h>
int a=30;
void main()
{
	//int a=20;
	{
	//int a=10;
	printf("\n the value of a with in block is : %d",a);//20//10
	}
	printf("\n the value of a within function is : %d",a);//10//20
	getch();
}
