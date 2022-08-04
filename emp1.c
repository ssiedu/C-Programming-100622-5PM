#include<stdio.h>
typedef struct employee
{
	int id;
	char name[20];
	float sal;
}emp;
void main()
{
  emp e1;
  printf("\n Enter Emp Id : ");
  scanf("%d",&e1.id);
  printf("\n Enter Emp Name : ");
  scanf("%s",&e1.name);
  printf("\n Enter Emp Salary : ");
  scanf("%f",&e1.sal);
  
  printf("\n Emp Id : %d",e1.id);
  printf("\n Emp Name : %s",e1.name);
  printf("\n Emp Salary : %.2f",e1.sal);
  getch();	
}
