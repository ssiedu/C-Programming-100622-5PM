#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	printf("\n Bitwise AND : %d",((a>b)&(a<b)));
	printf("\n Bitwise OR  : %d",((a>b)|(a<b)));
	printf("\n Bitwise NOT : %d",~(a>b));
	printf("\n Bitwise XOR  : %d",((a>b)^(a<b)));
	printf("\n Bitwise Left Shift : %d",(a<<1));
	printf("\n Bitwise Right Shift : %d",(b>>1));
	
	getch();
}
