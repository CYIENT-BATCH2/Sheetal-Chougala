#include<stdio.h>
int main()
{
	unsigned int data,even_bit,odd_bit,swap;
	int bit=7;

	printf("enter the number\n");
	fflush(stdout);
	scanf("%u",&data);
	printf("binary for the given data\n");
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}
	printf("\n");

	//For even bits
	even_bit=data &0xAAAAAAAA;
	even_bit=even_bit>>1;
	// For odd bits
	odd_bit=data & 0x55555555;
	odd_bit=odd_bit<<1;

swap=(odd_bit | even_bit);
printf("after swapping=%d\n",swap);
printf("\n");
printf("binary for after swapping bit\n");
for(bit=7;bit>=0;bit--)
	printf("%d",(swap>>bit)&1);
}






