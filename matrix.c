//Write a program to do matrix transpose (2d matrix)

#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the Array row and Column= ");
	scanf("%d %d",&r,&c);// here we enter the number of row and Column
	int a[r][c];
	printf("Enter the Elements of array: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]); // from user we getting elements
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	printf("-------------After transpose-----------------\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[j][i]);// after transpose we printing array element for tranpose we change the position of i and j
		printf("\n");
	}

}

