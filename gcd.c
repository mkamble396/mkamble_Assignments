#include<stdio.h>
int GCD(int ,int);
void sorting(int*,int);
int LCM(int ,int,int);
void main()
{

	int n1,n2,n3,n4,n5,gcd,lcm,ele;
	printf("Enter the numbers\n");
	int a[5],i;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
//	sorting(a,ele);

	lcm=a[0];
	for(i=1;i<ele;i++)
	{
		gcd=GCD(lcm,a[i]);
		lcm=(lcm*a[i])/gcd;
		printf("GCD=%d LCM=%d\n",gcd,lcm);
	}

	printf("GCD=%d LCM=%d\n",gcd,lcm);

}


int GCD(int n1,int n2)
{ 
	int num,den,rem;
		if (n1 > n2)
		{
			num = n1;
			den = n2;
		}
		else
		{
			num = n2;
			den= n1;
		}
	rem = num % den;
	while (rem!= 0)

	{
		num= den;
		den=rem;
		rem=num%den;
	}

	return den;
}


void sorting(int* a,int ele)
{
	int i,j,t;
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
