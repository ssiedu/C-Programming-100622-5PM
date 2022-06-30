#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter End limit : ");
	scanf("%d",&n);
	printf("\n Enter start limit : ");
	scanf("%d",&s);
	printf("\n Numbers are :\n ");
	i=s;
	while(i>=n)
	{
		
		printf("\n%d",i);
		i--;
	}
	getch();
}
