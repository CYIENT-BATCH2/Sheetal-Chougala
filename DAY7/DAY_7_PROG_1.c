








#include<stdio.h>
int main()
{
	unsigned int big=0;
	unsigned char temp=0,i;
	unsigned int l=0x12345678;
	for(i=0;i<4;i++)
	{
		temp=0;
		temp=l|temp;\
		big=temp|(big<<8);
		l=l>>8;
	}
	printf("big endian=%x\n",big);
	fflush(stdout);


}

