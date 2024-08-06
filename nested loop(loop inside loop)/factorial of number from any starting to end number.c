#include<stdio.h>
void main()
{
	int num1,num2,prod,j;
	printf("enter start number:");
	scanf("%d",&num1);
	printf("enter end number:");
	scanf("%d",&num2);
	printf("factorial of the numbers are:\n");
	for(int i=num1; i<=num2; i++)
	{   
        prod=1;   
		for(j=1; j<=i; j++)
		{
			prod=prod*j;
		}
		printf("%d ! = %d\n",i,prod);
    }
}