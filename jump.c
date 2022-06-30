#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5){
		goto XYZ;//continue;//break;
		}
	
		printf("\n%d",i);
	}
	XYZ: printf("\n We use goto statement");
	getch();
}
