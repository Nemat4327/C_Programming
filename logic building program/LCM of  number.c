#include<stdio.h>
void main()
{
	int num1,num2,lcm,hcf,min;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	min=num1<num2?num1:num2;
	for(int i=1; i<=min; i++)
	{
		if(num1%i==0 && num2%i==0)
			hcf=i;
	}
	lcm=num1*num2/hcf ;                                                    //as we know that lcm * hcf = num1 * num2 :>lcm=num1*num2/hcf
	printf("the lcm of %d and %d  is:%d ",num1,num2,lcm);
	printf("\nthe hcf of %d and %d is:%d",num1,num2,hcf);

}