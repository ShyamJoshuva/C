#include<stdio.h>

void Sum(int n)
{
	int sum = 0;
	if(n!=0)
	{
		for(int i = 1;i<=n;i++)
		{
			sum = sum+i;
		}
	}
	printf("The sum of %d natural number is %d",n,sum);
}


int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	Sum(n);
	return 0;
}