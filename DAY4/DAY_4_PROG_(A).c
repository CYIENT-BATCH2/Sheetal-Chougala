#include<stdio.h>
int main()
{
	int x=30,y=20,z=10,k,a,b,c,d,e;
	k=x+y*z/4%2-1;
	a=x%y+z*z;
	b=x*x-y/z;
	d=x+y/z-y;
	e=x+y-(x=y);
	//y=x+y-x=y;
	printf("%d %d %d %d %d %d\n",k,a,b,c,d,e);
	fflush(stdout);
}
