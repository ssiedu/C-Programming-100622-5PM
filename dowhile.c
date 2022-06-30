#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter End limit : ");
	scanf("%d",&n);
	printf("\n Enter Start Limit : ");
	scanf("%d",&s);
	printf("\n Numbers are:\n");
	i=s;
	do
	{
		printf("\n%d",i);
		i++;
	}while(i<=n);
	getch();
}
