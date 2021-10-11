/*percentage calculation*/

#include <stdio.h>

int main()
{
  int a,b=0;
  printf("Enter the mark of 5 subjects:");
  for(int i=1;i<=5;i++){
    scanf("%d",&a);
    b+=a;}
  int percentage;
  percentage = (b*100)/500;
  printf("The aggregate mark is %d",b);
  printf("\nMark percentage is %d",percentage);
  
  return 0;
}