#include<stdio.h>
int main()
{
	int i=10,j=50,k,l,m,n;
	k=++i+j++;
	l=i++-++j;
	m=--i+j++*i++-j--;
	n=(i--*j++);
	printf("%d %d %d %d %d %d\n",k,l,m,n,i,j);
	fflush(stdout);


}
