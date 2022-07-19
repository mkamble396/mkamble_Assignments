//Write a function to suppress a given character in the provided string. char * suppress_in_string(char *str, char c);

#include<stdio.h>
#include<stdlib.h>
int i;
char* supress(char *str,char a)
{

	printf("Before supressing char string is= %s\n",str);

	for(i=0;str[i];i++)// for comparison purpose we rotate this loop
	{
		if(str[i]==a)// compare char by chr with supress char 
		{	for(int j=i;str[j];j++)// updation our string we iterate this loop
			str[j]=str[j+1];
			i--;// used for checking neighborhood same char for eg if our string having "aaakam" if we want to supress 'a' then we need chek last one with cur.
		}


	}

	return str;

}




void main()
{
	int n;
	char *s ,*p,a;
	printf("number of Character:");
	scanf("%d",&n); // taking number of character from user
	s=malloc(sizeof(char)*n);// Allocating Dynamic memory for string
	printf("Enter the string:"); //taking string from user 
	scanf("%s",s);
	printf("Enter the which char you want to supress:");// taking which char we need to supress
	scanf(" %c",&a);
	printf("---------Before Supressing---------\n");
	puts(s);// printing string before supressing
	p=supress(s,a);// function calling
	printf("After Supressing char\n");
	printf("------------After Supressing--------\n");
	puts(p);
}
