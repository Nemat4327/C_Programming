#include<stdio.h>
void main()
{
    int num,digit,count=0,lastDigit;
    printf("enter the number:");
    scanf("%d",&num);
    int a=num;
    printf("enter the digit:");
    scanf("%d",&digit);
    while(num != 0)
    {
        lastDigit = num % 10;
        if (lastDigit == digit)
        count++;
        num=num/10;
    }
    printf("the frequency of digit %d is %d in %d",digit,count,a);
}