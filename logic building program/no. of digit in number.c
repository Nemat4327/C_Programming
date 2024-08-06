#include<stdio.h>
void main()
{
	int num,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	if(num == 0)
	{
		printf("the no. digit is:1");
	}
	else
	{
		while(num != 0)
		{
			num=num/10;
			count++;
		}
		printf("the no. of digit in number is: %d",count);
	}

}