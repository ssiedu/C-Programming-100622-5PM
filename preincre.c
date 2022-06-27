#include<stdio.h>
void main()
{
	int y=3;
	int x = y++;
	//int x=++y;
	//printf("\n pre increment value of x : %d",x);
	//printf("\n pre increment value of y : %d",y);
	printf("\n post increment value of x : %d",x);
	printf("\n post increment value of y : %d",y);
}
