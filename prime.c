//Print prime factors of a given number

#include<stdio.h>
void main()
{
	int n,i,j;
		printf("Enter the Number: ");
	scanf("%d",&n);

	for(i=2;i<=n;i++)
		if(n%i==0) // we find factor of given number;
		{
			for(j=2;j<i;j++) 
			{
			if(i%j==0) // here we are finding factor is prime or not 
					break;
				}
						
			if(j==i) // this condition is give prime factor 
				printf("%d\n",i);
		}


}
