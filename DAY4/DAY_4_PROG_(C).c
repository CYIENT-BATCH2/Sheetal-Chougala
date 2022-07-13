#include<stdio.h>
int main()
{
	int i=10,j=10,k,n,m,p=10,q=0,r,s,t=0,u=0,v=30,w,x=10,y=20,z=0;
	int a,b,c,d,e,f,g;

	k=i&&j;
	m=i||j;
	n=!i;
    r=p&&(q=20);
	s=p||(q=20);
	b=t||(u=20)&&v;
	c=x&&y||y&&x;
	d=x||y&&x||y;
	e=x&y|z&&x;
	f=x||y&y;
	g=x||y&(y&&z);
	printf("%d %d %d %d %d %d %d %d %d %d %d\n",k,m,n,r,s,b,c,d,e,f,g);
	fflush(stdout);

}

