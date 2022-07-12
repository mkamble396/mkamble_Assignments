#include<stdio.h>
void bit_reverse(int);
void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	bit_reverse(num);


}


void bit_reverse(int num)
{

	char i,j,m,n;
	printf("Before Reversing\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);//for binary printing 
		if(i%8==0)
			printf(" ");
	}
	printf("\n");

	for(i=0,j=31;i<j;i++,j--)
	{
		m=num>>i&1;// for checking bit is clear or set for toggling purpose
		n=num>>j&1; //for checking bit is clear or set for toggling purpose
		if(m!=n)// if they are not same we toggle that postion bit 
		{
			num=num^1<<i; /// toggle if the are not same hence jth postion bit is shift to ith loction and vice versa 
			num=num^1<<j;
		}
	}

	printf("After Reversing\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");	
	}
	printf("\n");


}
