#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("MyFile4.txt","w");
	fputs("This is Ssi Digital",fp);
	fseek(fp,8,SEEK_SET);
	fputs("c/C++ Classes",fp);
	fclose(fp);
	getch();
}
