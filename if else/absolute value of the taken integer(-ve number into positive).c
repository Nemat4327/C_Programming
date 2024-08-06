#include<stdio.h>
void main()
{
    int number;
    printf("\n************************absolute number program***********************\n\n");
    printf("enter the number:");
    scanf("%d",&number);
    if(number < 0)
    {
        number = number * (-1);
    }
    printf("the absolute value is :%d",number);
}