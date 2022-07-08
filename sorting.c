//Write sorting algorithm 
#include<stdio.h>
void main()
{
	int a[5],i,j,ele,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the Array Elements: ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);


	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i=0;i<ele-1;i++) // this is rotate array elements
	{
		for(j=0;j<ele-i-1;j++) // this loop start from begining  
			if(a[j]>a[j+1]) // here we are checking condition
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
