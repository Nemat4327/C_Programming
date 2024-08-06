#include<stdio.h>
void main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<=n-1; i++ )
		scanf("%d",&arr[i]);
	printf("the elements of the array are:\n");
	for(int j=0; j<=n-1; j++)
		printf("%d ",arr[j]);
	int sum=0;
	for(int k=0; k<=n-1; k++)
		sum=sum+arr[k];
	printf("\nthe sum of the elements of array are %d",sum);
}