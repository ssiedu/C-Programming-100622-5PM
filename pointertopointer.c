#include<stdio.h>
void main()
{
	int num = 100;
	int *ptr = &num;
	int **pptr = &ptr;
	int ***ppptr = &pptr ;
	int ****pppptr = &ppptr;
	
	printf("\n ptr is : %d",*ptr);
	printf("\n pptr is : %d",**pptr);
	printf("\n ppptr is : %d",***ppptr);
	printf("\n pppptr is : %d",****pppptr);
	getch();
	
	
	
}
