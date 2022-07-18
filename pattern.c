#include<stdio.h>
void main()
{
	int i,j;
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	getch();
}
