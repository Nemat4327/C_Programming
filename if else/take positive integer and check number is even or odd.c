#include<stdio.h>
void main()
{
    int number;
    printf("\n************************program to check the number is even or odd*******************\n\n");
    printf("enter the positive number:");
    scanf("%d",&number);
    if (number > 0)
    {
        if (number % 2 == 0)
        {
            printf("%d is even number",number);
        }
        else
        {
            printf("%d is odd number",number);
        }
    }
    else
    {
        printf("please enter the positive number");
    }
}
