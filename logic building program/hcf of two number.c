#include<stdio.h>
void main()
{
    int num1,num2,min,hcf;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    min=num1<num2?num1:num2;
    for(int i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("the hcf of number %d and %d is: %d",num1,num2,hcf);

    
    
}