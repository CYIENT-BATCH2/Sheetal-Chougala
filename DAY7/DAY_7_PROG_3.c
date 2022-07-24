






#include<stdio.h>
int main()
{
	int CMCON,ADCON0,a;
	printf("enter the CMCON and ADCON0\n");
	fflush(stdout);
	scanf("%x%x",&CMCON,&ADCON0);
	a=(ADCON0 & 0x3c);
			a=a>>2;
	if(a==0x07)
	{
		printf("CMCON=%x",(CMCON & 0xf0));

	}
	else
	{
		printf("ADCON0 register some bit are not set with 0x07");
	}

}
