#include <stdio.h>
void main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    if (number > 99 && number < 1000)
    {
        printf("the number %d is three digit number", number);
    }
    else
    {
        printf("'the number %d is not three digit number", number);
    }
}