#include<stdio.h>
int main()
{
	int year;
	printf("enter the year\n");
	fflush(stdout);
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
		printf("leap year\n");
	else
		printf("not a leap year\n");
}
