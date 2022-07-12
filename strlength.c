#include<stdio.h>
int my_strlen(char*);
void main()
{
	char s[30];
	int l;
	printf("Enter the string: \n");
	scanf("%[^\n]",s);
	l=my_strlen(s);
	printf("String length=%d\n",l);
}

int my_strlen(char*p)
{
	char i;
	for(i=0;p[i];i++);
	return i;


}
