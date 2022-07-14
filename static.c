#include<stdio.h>
void test();
void main()
{
	test();
	test();
	test();
	getch();
}
void test()
{
	static int a=10;
	printf("\n value of a :%d",a);
	a=a+2;
}
