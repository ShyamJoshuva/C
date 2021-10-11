/*conversion of fahrenheit to celcius*/

#include <stdio.h>

int main()
{
int length,breath;
printf("#Enter the lenth and breath of rectangle:");
scanf("%d%d",&length,&breath);
printf("=The area of rectangle is %d",length*breath);
float radius;
printf("\n#Enter the radius of circle:");
scanf("%f",&radius);
printf("\n=The area of cirle is %f",3.14*(radius*radius));
printf("\n=The circumference of circle is %f",2*3.14*radius);
  return 0;
}