#include<stdio.h>
void main()
{
	int num1,num2,res,ch;
	printf("\n Enter first Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
	
	printf("\n\n\n Enter Your Choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: res = num1+num2;
				printf("\n Addition is : %d",res);
				break;
		case 2: res = num1-num2;
				printf("\n Subtraction is : %d",res);
				break;
		case 3: res = num1*num2;
				printf("\n Multiplication is : %d",res);
				break;
		case 4: res = num1/num2;
				printf("\n Division is : %d",res);
				break;
		default: printf("\n Invalid choice");
				 break;
	}
	getch();
}
