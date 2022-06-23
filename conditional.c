#include<stdio.h>
void main()
{
	int a,b,res;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	res = (a>b) ? a : b;
	
	printf("\n Largest number is : %d",res);
	getch();
	
}
