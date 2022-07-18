#include<stdio.h>
void main()
{
	int a;
	int *iptr = NULL;
	float f;
	float *fptr = NULL;
	char ch;
	char *cptr = NULL;
	
	iptr = &a;
	a=10;
	printf("\n integer pointer a : %d \t iptr : %d",a,*iptr);
	
	fptr = &f;
	f=12.34;
	printf("\n float pointer f : %.2f \t fptr : %.2f",f, *fptr);
	
	cptr = &ch;
	ch = 'A';
	printf("\n char pointer ch : %c \t cptr : %c",ch,*cptr);
	
	getch();
	
	
	
	
	
	
		
}
