// call by Address
#include<stdio.h>
void swap(int *a, int *b);
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n\n Before swap x=%d  and y=%d",x,y);
	swap(&x,&y);
	printf("\n\n After swap x=%d  and y=%d",x,y);
	getch();
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a  = *b;
	*b   = temp;
	printf("\n\n In Function swap a=%d  and b=%d",*a,*b);
}

