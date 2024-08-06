#include<stdio.h>
void main()
{
	int num,count=0,prod,sum,a,b,lastDigit;
	printf("enter the number:");
	scanf("%d",&num);
	a=b=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	sum=0;
	while(a!=0)
	{
		lastDigit=a%10;

		prod=1;
		for(int i=1 ; i<=count ; i++)
		{
			prod=prod*lastDigit;
		}
		sum=sum+prod;
		a=a/10;

	}
	if(sum==b)
		printf("armstrong number");
	else
		printf("not armstrong number");
}