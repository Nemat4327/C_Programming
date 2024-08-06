#include<stdio.h>
void main()
{
	int number,i,sum = 0;
	printf("enter the number:");
	scanf("%d",&number);
	for(i=1; i<=number; i++)
	{
		sum = sum + i;
	}
	printf("the sum of the integer is: %d",sum);
}


//by using mathematics Sn=n*[2*a + (n - 1)*d]/2; n=1,2,3,4,5,..... a=d=1   ;Sn=n*(n + 1)/2

// #include<stdio.h>
// void main()
// {
// 	int n,Sn;
// 	printf("enter the number:");
// 	scanf("%d",&n);
// 	Sn=n*(n + 1)/2;
// 	printf("the sum is: %d",Sn);

// }
