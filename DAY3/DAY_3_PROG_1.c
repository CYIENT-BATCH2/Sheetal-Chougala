

#include <stdio.h>

int main()
{
   int a,b,c,d,e,f,g,h,sum,average;
    int p,q,r,u,v,w,x;
    float i,j,k,l,m,n,o,sum1,average1,s,t;


    printf("enter the 8 integer values\n");
    fflush(stdout);
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
   printf("enter the 7 float values\n");
    scanf("%f %f %f %f %f %f %f",&i,&j,&k,&l,&m,&n,&o);


    sum=a+b+c+d+e+f+g+h;
    average=sum/8;
    printf("sum=%d sum of 8 integer and average=%d\n",sum,average);
    sum1=i+j+k+l+m+n+o;
    average1=sum/8;
    printf("total=%f sum of 7 float values and average of=%f\n",sum1,average1);
    s=sum/sum1;
    printf("s=%f divided sum\n",s);
    t=average/average1;
    printf("t=%f divide average\n",t);
    p=i*10;
    q=j*10;
    r=k*10;
    u=l*10;
    v=m*10;
    w=n*10;
    x=o*10;

    printf("p=%d q=%d r=%d u=%d v=%d w=%d x=%d\n",p,q,r,u,v,w,x);
    printf("i=%d j=%d k=%d l=%d m=%d n=%d o=%d\n",p,q,r,u,v,w,x);

return 0;

}
