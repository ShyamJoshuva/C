#include<stdio.h>

void PositiveNegative(int i)
{
	if(i>=0)
	{
		if(i==0)
			printf("Netral value(0)");
		else
			printf("%d is Positive.",i);
	}
	else
		printf("%d is Negative.",i);
	
}

int main()
{
	int i;
	printf("Enter a integer:");
	scanf(" %d",i);
	PositiveNegative(i);
	
	return 0;
}