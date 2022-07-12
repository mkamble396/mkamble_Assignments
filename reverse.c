#include<stdio.h>
void Reverse_str(char*,int);

void main()
{
	int i,l;
	char s[20];
	printf("Enter the String: ");
	scanf("%[^\n]",s);
	puts(s);
	for(i=0;s[i];i++);
	l=i;
	Reverse_str(s,l);
	puts(s);


}

void Reverse_str(char*p,int l)
{
	int i,j;
	char t;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;

	}


}
