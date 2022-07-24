







#include<stdio.h>
int main()
{
	int num,num1,num2;
	printf("enter the number for SSPSTAT\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("binary for SSPSTAT register\n");

	{
		for(int bit=7;bit>=0;bit--)
		{
			printf("%d",((num>>bit)&1));
		}
		printf("\n");
		if((num & 88)==88)
		{
			printf("CKE,P and S bit already set\n");

		}
		num1=(num&(~88));
	printf("after setting the CKE,P and S bit\n");
	for(int bit=7;bit>0;bit--)
	{
		printf("%d",((num1>>bit)&1));
	}
	printf("\n");
	printf("UA,BF,SMP bits in SSPSTAT register\n");
	if(num==85)
	{
		num2=num&131;
		printf("value of register=%d",num2);
	}
	}
}
