#include<stdio.h>
void main()
{
	int n,max,min,i;
	printf("Enter the number of Elements for Array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements of Array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Elements of Array a[%d]",n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	min=max=a[0];

	for(i=0;i<n;i++)
	{
		if(a[i]<min) // checking if array ele is less than min then that it is update the value of min variable

			min=a[i];// for update min value
		else if(a[i]>max)  // checking if array ele is greater than  max that it is update the value of max variable

			max=a[i];//for update max value
	}

	printf("\n Max=%d\n Min=%d\n",max,min);
}
