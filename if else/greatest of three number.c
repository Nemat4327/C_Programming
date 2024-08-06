#include <stdio.h>
void main()
{
    int number1, number2, number3;
    printf("enter the first number:");
    scanf("%d", &number1);
    printf("enter the second number:");
    scanf("%d", &number2);
    printf("enter the third nuumber:");
    scanf("%d", &number3);
    if (number1 > number2 && number1 > number3)
    {
       printf("number one %d is greatest",number1);
    }
    if (number2 > number1 && number2 > number3)
    {
        printf("number two %d is greatest",number2);
    }
    if (number3 > number1 && number3 > number2)
    {
        printf("number three %d is greatest",number3);
    }
}