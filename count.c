#include<stdio.h>
void char_count(char*);
void main()
{
	char s[20],n;
	printf("Enter the string: \n");
	scanf("%[^\n]",s);
	char_count(s);


}
void char_count(char*p)
{
	int i,j,c=0,v=1;

	for(i=0;p[i];i++)
	{
		for(j=0,c=0;p[j];j++)
		{
			if(p[i]==p[j])
			{	c++;

			}

		}
		if(c>v)
		{
			v=c;
			printf("character %c is %d times\n",p[i],v);
		}
	}
}



