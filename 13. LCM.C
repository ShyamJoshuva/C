#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,lcm;
 clrscr();
 printf("Enter the two numbers:");
 scanf("%d%d",&a,&b);
 lcm = a>b ? a:b;

 while(1)
 {
  if(lcm%a==0 && lcm%b==0)
     {
      printf("lcm of %d and %d is %d.",a,b,lcm);
      break;
     }
  ++lcm;
 }
 getch();
 return 0;
}