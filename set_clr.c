#include<stdio.h>
void bit_set(int, int);
void bit_clear(int,int);
void main()
{
	int num,i,pos;
	printf("Enter the Number: ");
	scanf("%d",&num);
	printf("Which position do you want to set: ");
	scanf("%d",&pos);

	bit_set(num,pos);
	printf("Which position do you want to clear: ");
	scanf("%d",&pos);
	bit_clear(num,pos);
}


void bit_set(int num,int pos)
{ char i;
	printf("Before Set the bit:");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);//for binary printing 
		if(i%8==0)
			printf(" ");
	}

	printf("\n");
	printf("After set the bit:");	
	for(i=31;i>=0;i--)
	{
		if((num>>pos&1)==0) // for chechking bit at particular position
			num^=1<<pos;// if pos is zero we set it
		else printf("%d",num>>i&1);//for binary printing 
		if(i%8==0)
			printf(" ");
	}


	printf("\n");
}



void bit_clear(int num,int pos)
{
	char i;
	printf("Before clear the bit:");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);//for binary printing 
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
	printf("After clear the bit:");	
	for(i=31;i>=0;i--)
	{
		if((num>>pos&1)!=0) // for checking particular bit is clear or not if 
			num^=1<<pos;// if it' not we clear that using toggling bit 
		else printf("%d",num>>i&1);//for binary printing 
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
}
