#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter the number\n");
	fflush(stdout);
	scanf("%d%d%d",&n1,&n2,&n3);
	if((n1>n2)||(n1>n3))
		printf("n1=%d is biggest number\n",n1);
	else if((n2>n1)||(n2>n3))
		printf("n2=%d is biggest number\n",n2);
	else
		printf("n3=%d is biggest number\n",n3);
}
