#include<stdio.h>
void swap(int *a, int *b);
void main()
{
	int x,y;
	printf("\n Enter the value opf x and y : ");
	scanf("%d%d",&x,&y);
	printf("\n value of x : %d and y : %d",x,y);
	swap(&x,&y);
	printf("\n after call value of x : %d and y : %d",x,y);
	getch();
}
void swap(int *a,int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	printf("\n value of a : %d and b : %d",*a,*b);
}
