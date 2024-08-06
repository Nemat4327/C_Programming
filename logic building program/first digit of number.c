#include<stdio.h>
void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>=10)
    {
        num=num/10;
    }
    printf("the first digit is %d",num);
}