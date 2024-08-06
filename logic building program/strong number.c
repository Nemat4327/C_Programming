#include<stdio.h>
void main()
{
    int num,lastDigit,fact,sum,a,i;
    printf("enter the number:");
    scanf("%d",&num);
    a=num;
    sum=0;
    while(num!=0)
    {
        lastDigit=num%10;
        fact=1;
        for(i=1 ;i<=lastDigit ;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==a)
    {
        printf("strong number");
    }
    else
    printf("not strong number");
}