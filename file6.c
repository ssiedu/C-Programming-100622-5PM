#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp = fopen("myfile1.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}

	fclose(fp);
	getch();
}
