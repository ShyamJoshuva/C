#include<stdio.h>

int main()
{
	int a,sum=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		sum = sum+a%10;
		a = a/10;
	}
	printf("The sum of digits is %d",sum);
	return 0;
}