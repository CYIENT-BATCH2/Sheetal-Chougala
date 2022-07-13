#include<stdio.h>
int main()
{
	int num,bit;
	printf("enter the hex value\n");
	fflush(stdout);
	scanf("%x",&num);
	printf("enter the bit\n");
	fflush(stdout);
	scanf("%d",&bit);
	printf("%d",num>>bit);

}
