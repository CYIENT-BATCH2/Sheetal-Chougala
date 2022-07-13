#include<stdio.h>
int main()
{
	int i=10;
	char ch='a';
	float f=2.5;
	double d=23.5;
	printf("%ld %ld %ld\n",sizeof(int),sizeof(i),sizeof(i));
	fflush(stdout);
	printf("%ld %ld %ld\n",sizeof(char),sizeof(ch),sizeof('a'));
	printf("%ld %ld %ld\n",sizeof(float),sizeof(f),sizeof(2.5));
	printf("%ld %ld %ld\n",sizeof(double),sizeof(d),sizeof(23.5));

}
