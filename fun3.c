//function with argument and without return value
#include<stdio.h>
void add(int a , float b);  // function declaration
void main()
{
	int a;
	float b;
	printf("\n Enter the value of a and b : ");
	scanf("%d%f",&a,&b);
	add(a,b);
	getch();
}
void add(int a, float b)
{
	float c;
	c=a+b;
	printf("\n sum is : %.2f",c);
}
