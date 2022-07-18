#include<stdio.h>
void main()
{
	int a=10;
	int *ptr = &a;
	float b= 12.3;
	float *fptr = &b;
	
	printf("\n value of a : %d ",a);
	printf("\n address of a : %u",&a);	
	printf("\n value of a by ptr : %d",*ptr);
	printf("\n value of a by ptr : %f",*fptr);
	
	printf("\n store address in ptr is : %u",ptr);
	printf("\n store address in ptr is : %p",ptr);
	printf("\n store address in ptr is : %x",ptr);
	getch();
}
