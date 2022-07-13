
#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter the temprature in celsius\n");
	fflush(stdout);
	scanf("%f",&celsius);

	fahrenheit=(1.8*celsius)+32;
	printf("%.2f fahrenheit",fahrenheit);
	printf("enter the fahrenheit\n");

	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("%.2f celsius",celsius);
}
