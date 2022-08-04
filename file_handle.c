#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp = fopen("file_handle.c","r");
	while(1)
	{
		ch = fgetc(fp);
		if(ch==EOF)  // End of File
		break;
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
