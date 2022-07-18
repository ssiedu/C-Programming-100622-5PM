#include<stdio.h>
void main()
{
	int a[3][2]= {{1,2},{2,4},{5,6}};
	int i,j;
	printf("\n matrix is : \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
