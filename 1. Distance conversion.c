/*conversion of KM into m,feet,inch,cm.*/

#include <stdio.h>

int main()
{
    int a,meters,centimeters;
    float feet,inches;
    printf("Enter the distance in kilometer:");
    scanf("%d",&a);
    meters = a*1000;
    feet = a*3280.84;
    inches = a*39370.08;
    centimeters = a*100000;
    printf("\nThe value of %d KM in meter is %d",a,meters);
    printf("\nThe value of %d KM in feet is %f",a,feet);
    printf("\nThe value of %d KM in inches is %f",a,inches);
    printf("\nThe value of %d KM in centimeter is %d",a,centimeters);
    return 0;
}