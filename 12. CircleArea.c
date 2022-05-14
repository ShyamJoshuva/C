#include<stdio.h>
#include<math.h>

float CircleArea(float radius)
{
	return((M_PI)*radius*radius);
}

int main()
{
	float area,radius;
	printf("Enter the radius:");
	scanf("%f",&radius);
	area = CircleArea(radius);
	printf("The area of circle is %f",area);
	
	return 0;
}