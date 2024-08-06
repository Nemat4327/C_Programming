#include<stdio.h>
void main()
{
   int base,power,result = 1;
   printf("enter the base:");
   scanf("%d",&base);
   printf("enter the power:");
   scanf("%d",&power);
   for(int i=1 ;i<=power ;i++)
   {
       result = result * base ;
   }
   printf("the result is: %d",result);
}