#include<stdio.h>
void main()
{
	FILE *fp;
	char text[30];
	fp=fopen ("Myfile3.txt","w");
	fputs("Welcome to C/C++ Classes",fp);
	fclose(fp);
	fp=fopen ("Myfile3.txt","r");
	printf("%s",fgets(text,30,fp));
	fclose(fp);
	getch();
}
