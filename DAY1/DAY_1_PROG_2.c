#include<stdio.h>
int main()
{
	char ch;
	printf("enter the charcter\n");
	fflush(stdout);
	scanf("%c",&ch);
if((ch=='a'|| ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='u' ||ch=='U'))
			printf("vowel\n");
	else
		printf("consonants\n");
}

