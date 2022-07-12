#include<stdio.h>
void main()
{
	int i,num,m;
	printf("Enter the number:");
	scanf("%d",&num);

	printf("Before flip:");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);

	}
	printf("\n");

	for(i=31;i>=0;i--)
	{
		m=m>>i&1;
		if(m)
			num=num^1<<i;
		else num=num^1<<i;
	}

	printf("After flip:");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);

	}
	printf("\n");

}
