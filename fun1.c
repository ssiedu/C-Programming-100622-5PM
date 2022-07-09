//function without arguments and without return value
#include<stdio.h>
void hello();  // function declaration

void main()
{
	hello();  // function call
	hello();
	hello();
	hello();
	hello();
	getch();
}
void hello()  // function definition
{
	printf("\n Hello! Welcome to ssi digital ");
}
