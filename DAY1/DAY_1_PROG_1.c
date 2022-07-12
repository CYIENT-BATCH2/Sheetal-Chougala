#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	fflush(stdout);
	scanf(" %d",&n);
	if((n%11)==1||(n%11)==0)
		printf("special\n");
		else
		printf("not special\n");

}
