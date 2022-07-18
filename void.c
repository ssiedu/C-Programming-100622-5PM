#include<stdio.h>
void main()
{
	int i=10;
	float f= 34.5;
	char c = 'z';
	void *ptr;
	
	ptr = &i;
	printf("\n int pointer i : %d \n ptr : %d",i,(*(int*)ptr));
	
	ptr = &f;
	printf("\n float pointer f : %.2f \n ptr : %.2f",f,*(float*)ptr);
	
	
	ptr = &c;
	printf("\n char pointer c : %c \n cptr : %c",c,*(char*)ptr);
	
	getch();
	
	
}
