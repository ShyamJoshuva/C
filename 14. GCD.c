#include<stdio.h>

int main()
{ 
	int a,b,gcd,i;
	printf("Enter two numbers for GCD:");
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=a && i<=b;i++)
	{
		if((a%i==0) && (b%i==0))
		gcd=i;
	}
	printf("GCD of %d and %d is %d",a,b,gcd);
	return 0;
}