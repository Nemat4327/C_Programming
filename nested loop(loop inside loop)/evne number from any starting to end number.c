#include<stdio.h>
void main()
{
	int startnum,endnum;
	printf("enter start number:");
	scanf("%d",&startnum);
	printf("enter end number:");
	scanf("%d",&endnum);
	printf("the even no.are:\n");
	for(int i=startnum; i<=endnum; i++)
	{
		if(i%2==0)

			printf("%d\n",i);
	}
}