#include<stdio.h>
void main()
{
	int number,i,product = 1;
	printf("enter the number:");
	scanf("%d",&number);
	for(i=1 ; i<=number ; i++)
	{
		product = product * i;
	}
	printf("the factorial of the number is %d is:%d",number,product);
}