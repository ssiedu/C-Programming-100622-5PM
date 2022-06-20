#include<stdio.h>
#define pi 3.14
void main()
{
	float area;
	int r;
	printf("\n Enter radius : ");
	scanf("%d",&r);
	area = pi*r*r;
	printf("\n area of circle : %.2f",area);
	getch();
}
