#include<stdio.h>
int sub(int,int);
int add(int,int);      //decleration of the function
void main()
{
	int a,b;
	printf("enter the two number:\n");
	scanf("%d  %d",&a,&b);
	int result=add(a,b);              //calling the function whose name is add
	printf("sum is %d\n",result);
	int result2=sub(a,b);             //calling the function whose name is sub
	printf("minus is %d",result2);
}

//add function defination or implementation
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}

//sub function defination or implementation
int sub(int a,int b)
{	int minus;
	minus=a-b;
	return minus;
}