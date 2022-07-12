#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,t;
	printf("enter the four values\n");
	fflush(stdout);
	scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
	loop:
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
		goto loop;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
		goto loop;
	}
	if(c>d)
	{
		t=c;
		c=d;
		d=t;
		goto loop;
	}
	if(d>e)
	{
		t=d;
		d=e;
		e=t;
		goto loop;
	}
	if(e>f)
	{
		t=e;
		e=f;
		f=t;
		goto loop;
	}
	if(f>g)
	{
		t=f;
		f=g;
		g=t;
		goto loop;
	}
	if(g>h)
	{
		t=g;
	    g=h;
	    h=t;
	    goto loop;
    }
   if(h>i)
  {
	   t=h;
	   h=i;
	   i=t;
	   goto loop;

  }

	printf("%d%d%d%d%d%d%d%d%d\n",a,b,c,d,e,f,g,h,i);
	}

