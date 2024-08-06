#include<stdio.h>
void main()
{
	int num,i,sum;
	printf("enter the number:");
	scanf("%d",&num);
	sum=0;
	for(i=1 ; i<=num-1; i++)
	{
		if(num % i == 0)
		{
			sum+=i;
		}
	}
	if(sum==num)
		printf("the %d is perfect number",num);
	else
		printf("the %d is not perfect",num);
}