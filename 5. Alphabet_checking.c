#include<stdio.h>

void alphabet(char ch)
{
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
		printf("It is a Alphabet");
	else
		printf("Not a Alphabet");
}

int main()
{
	char ch;
	printf("Enter the character:");
	scanf(" %c",&ch);
	alphabet(ch);
	
	return 0;
}