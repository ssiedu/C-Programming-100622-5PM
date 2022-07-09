// call by value
#include<stdio.h>
void swap(int a, int b); // function declaration
void main()
{
	int x,y;
	printf("\n Enter the value of x: ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n\n Before swapping the value of x: %d and y: %d",x,y);
	swap(x,y);
	printf("\n\n After swapping the value of x: %d and y: %d",x,y);
	getch();
}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n\n Before swapping the value of a: %d and b: %d",a,b);
}
