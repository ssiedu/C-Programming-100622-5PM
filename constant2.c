#include<stdio.h>
void main()
{
	int area;
	const int side=10;
	area = side*side;
	printf("\n area is : %d",area);
	//side=20;
	printf("\n side is : %d",side);
	getch();
}
