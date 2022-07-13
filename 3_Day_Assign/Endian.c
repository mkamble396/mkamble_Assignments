//Write a function to find endianness (big-endian or little-endian) of CPU. bool is_little_endian();


#include<stdio.h>
void boolis_little_endian(int n)
{
	char *p=&n;
	if(*p!=0)
		printf("CPU is Little Endian\n");
	else printf("CPU is Big Endian\n");


}
void main()
{
	int num;
	printf("Enter the two digit number: ");
	scanf("%d",&num);
	boolis_little_endian(num);

}
