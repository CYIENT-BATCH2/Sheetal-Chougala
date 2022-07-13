#include<stdio.h>
int main()
{
	int a=10,b=20,c=5,d,e,f,g,h,i=10,j=20,k=30,l,m,n,p,z;
	d=a&b;
	e=a|b;
	f=a^b;
	g=a&&b|c&&b;
	h=a||b&c&&a;
	z=a&b|b||c;
	l=i&&j&k;
	m=i&j|k&&i;
	n=i||j&j;
	p=i||j&(i&&j);
	printf("%d %d %d %d %d %d %d %d %d %d \n",d,e,f,g,h,z,l,m,n,p);
	fflush(stdout);

}
