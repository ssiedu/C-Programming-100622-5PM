#include<stdio.h>
int addition(); // function declaration
void main()
{
	int res;
	int (*ptr)();
	ptr = &addition;
	res = (*ptr)();
	printf("\n addition is : %d",res);
	getch();
	
}
int addition()
{
	int a,b ;
	printf("\n Enter two values : ");
	scanf("%d%d",&a,&b);
	return a+b;
}
