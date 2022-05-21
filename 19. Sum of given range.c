#include<stdio.h>

int main()
{
	int start,end;
	printf("Enter the start and value:");
	scanf("%d%d",&start,&end);
	
	int i,sum=0;
	for(i=start;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	
	return 0;
}