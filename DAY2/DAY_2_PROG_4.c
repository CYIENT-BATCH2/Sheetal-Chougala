

#include<stdio.h>
int main()
{
	long int rem,num,count=0;
	printf("enter the lottery tickets\n");
	fflush(stdout);
	scanf("%ld",&num);
	loop:
	if(num!=0)
	{
		rem=num%10;
		if(rem==3)
			count++;
		num=num/10;
		goto loop;
	}
	if(count>0)
		printf("%ld",count);
	}

