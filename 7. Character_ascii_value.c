#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	printf("The ascii value of %c %d",ch,ch);
	return 0;
}

/* A character variable holds the ASCII value (an integer number between 0 and 127) rather than that character itself.
 That value is known as the ASCII value.*/