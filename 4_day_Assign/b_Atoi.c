//Write a function to convert string (which is in hex or octal or decimal base) to integer. int my_atoi(char *str, int base)
#include<stdio.h>
#include<stdlib.h>

int my_atoi(char *str);
void main(int c, char **argv)
{
	int p=atoi(argv[1]);

	printf("\nUsing the predefined AtoI=%d\n",p);
	int u;
	u=my_atoi(argv[1]);
	printf("\nUsing the User Defined AtoI=%d\n",u);


}

int my_atoi(char *s)
{
	int i,num;
	if(s[0]=='-')
		i=1;
	else
		i=0;

	for(num=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			num=num*10+(s[i]-48);// modifty our acsii to integer value by minimzing zero ascii value.

		else 
			break;

	}
	if(s[0]=='-')
		num=-num;
	return num;

}
