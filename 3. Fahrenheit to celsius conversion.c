/*conversion of fahrenheit to celcius*/

#include <stdio.h>

int main()
{
//(F − 32) × 5/9 = 0°C
  float f,celcius;
  printf("Enter the temperature(F):");
  scanf("%f",&f);
  celcius = (f - 32) * 5/9;
  printf("%f",celcius);
  
  return 0;
}