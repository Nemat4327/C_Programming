#include<stdio.h>
#include<stdbool.h>
void main()
{
	int number,i;
	printf("enter the number:");
	scanf("%d",&number);
	bool flag=true;
	for(i=2; i<=number-1; i++)
	{
		if(number % i == 0)
		{
			flag=false;
			break;
		}
	}
	if(number == 1)
	{
		printf("%d is not a prime or composite number",number);
	}
	else if(flag == true)
	{
		printf("%d is prime number",number);
	}
	else
	{
		printf("%d is composite number",number);
	}

}