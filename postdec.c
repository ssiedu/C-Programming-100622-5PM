#include<stdio.h>
void main()
{
	int y=3;
	//int x = y--;
	int x=--y;
	printf("\n pre decrement value of x : %d",x);
	printf("\n pre decrement value of y : %d",y);
	//printf("\n post decrement value of x : %d",x);
	//printf("\n post decrement value of y : %d",y);
}
