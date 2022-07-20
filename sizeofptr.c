#include<stdio.h>
void main()
{
	int i=10;
	float f = 12.3;
	char c = 'a';
	int *iptr = &i;
	float *fptr = &f;
	char *cptr = &c;
	
	printf("\n size of int : %d",sizeof(iptr));
	printf("\n size of float : %d",sizeof(fptr));
	printf("\n size of cptr : %d",sizeof(cptr));
	
	getch();
}
