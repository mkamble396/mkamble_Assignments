//Write a function to return whether n-th bit from right-to-left is set in an integer.
#include<stdio.h>
int checking_set_bit(int ,int);
void main()
{
	int num,pos,r;

	printf("Enter the number and position(right to Left):");
	scanf("%d%d",&num,&pos);
	r=checking_set_bit(num,pos);
	if(r==0)
		printf("Position %d bit is clear\n",pos);
	else printf("Position %d bit is set\n",pos);



}

int checking_set_bit(int num,int pos)
{

	char i;
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);//for binary printing 
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
	for(i=31;i>=0;i--)
	{
		if((num>>pos&1)==0) // for chechking bit at particular position
			return 0;
		else return 1;

	}
}
