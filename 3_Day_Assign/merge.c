//Write a program to merge two arrays, use pointers 
#include<stdio.h>
#include<stdlib.h>
int i,j;
void print_array(int[],int);
void scan_array(int*,int);
void main()
{
int n,z;
printf("Enter the Elements of First and second Array: ");
scanf("%d%d",&n,&z);
	int a[n],b[z],*m,aele,bele,mele;
	aele=sizeof(a)/sizeof(a[0]);
	bele=sizeof(b)/sizeof(b[0]);
	mele=aele+bele;
	m=malloc(sizeof(int)*mele);

	printf("Enter the Array Elements: ");
	scan_array(a,aele);
	print_array(a,aele);
	printf("Enter the Array Elements: ");
	scan_array(b,bele);
	print_array(b,bele);

	for(i=0,j=0;i<mele;i++)
	{
		if(i<aele)
			m[i]=a[i];
		else 
			m[i]=b[j++];
			

	}


	print_array(m,mele);


}

void scan_array(int*p,int ele)
{

	for(i=0;i<ele;i++)
		scanf("%d",&p[i]);

}


void print_array(int*a,int ele)
{
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");

}
