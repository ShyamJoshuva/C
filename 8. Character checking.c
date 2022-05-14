#include<stdio.h>

void checking(char ch)
{
	if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)||(ch>=48 && ch<=57))
	{
		if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
			printf("It is a Alphabet.");
		else
			printf("It is a number.");
	}
	else
		printf("It is a symbol.");
		
}

int main()
{
	char ch;
	printf("Enter the character:");
	scanf(" %c",&ch);
	checking(ch);
	
	return 0;
}