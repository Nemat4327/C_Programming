

#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);
void main()
{
	int a,b,option,addition,multiplication,division,subtraction;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("what operation do you want to perform choose the below given option:-\n");
	printf("1. +\n2. -\n3. *\n4. /\n");
	scanf("%d",&option);
	if(option==1)
	{	addition=add(a,b);
		printf("the addition is %d",addition);
	}
	else if(option==2)
	{	subtraction=sub(a,b);
		printf("subtraction is %d",subtraction);
	}
	else if(option==3)
	{	multiplication=mul(a,b);
		printf("the multiplication is %d",multiplication);
	}
	else if(option==4)
	{	division=divi(a,b);
		printf("the division is %d",division);
	}
	else
	{
		printf("please enter the valid option");
	}

}
int add(int a,int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int divi(int a,int b)
{
	return a/b;
}