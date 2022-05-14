#include<stdio.h>

int iseven(int i)
{
	return (!(i&1));
}
int main()
{
	int i;
	printf("Enter a integer:");
	scanf("%d",&i);
	iseven(i) ? printf("Even"):printf("Odd");
	
	return 0;
}