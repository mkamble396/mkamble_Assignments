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
		if(a[i]<min)
			min=a[i];
		else if(a[i]>max)
			max=a[i];
	}

	printf("\n Max=%d\n Min=%d\n",max,min);
}
