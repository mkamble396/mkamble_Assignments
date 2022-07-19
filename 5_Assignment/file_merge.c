#include<stdio.h>
void main(int c,char **v)
{
	if(c!=4)
	{
		printf("Usage:./a.out f1 f2 f3\n");
		return ;
	}

	char ch;
	FILE *f1,*f2,*f3;
	f1=fopen(v[1],"r");//open the file in read mode
	f2=fopen(v[2],"r");
	f3=fopen(v[3],"w");// open the file in write mode to used for merge the file



	while((ch=fgetc(f1))!=EOF)
		fputc(ch,f3);
	while((ch=fgetc(f2))!=EOF)
		fputc(ch,f3);





}
