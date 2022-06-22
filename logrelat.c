#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	printf("\n Logical AND : %d",((a>b)&&(a<b)));
	printf("\n Logical OR  : %d",((a>b)||(a<b)));
	printf("\n Logical NOT : %d",!(a>b));
	getch()
}
