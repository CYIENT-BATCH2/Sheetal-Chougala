#include<stdio.h>
int main()
{
	int n1,n2,num,a;

	printf("enter the two number\n");
	fflush(stdout);
	scanf("%d%d",&n1,&n2);


(n1>n2)?printf("n1=%d biggest number\n",n1):printf("n2=%d biggest number\n",n2);
	fflush(stdout);

	printf("enter the  number\n");
	scanf("%d",&num);

(num%2==0)?printf("even\n"):printf("odd\n");
printf("enter one number\n");
scanf("%d",&a);

 (a>0)?printf("%d is positive number\n",a):printf("%d is negative  number\n",a);;
}







