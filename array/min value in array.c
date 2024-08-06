#include<stdio.h>
void main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<=n-1; i++)
		scanf("%d",&arr[i]);
	printf("the elements are:");
	for(int j=0; j<=n-1; j++)
		printf("%d ",arr[j]);
	int min=arr[0];
	for(int k=1; k<=n-1; k++)
	{	if(arr[k]<min)
			min=arr[k];
	}
	printf("\nthe min element in array is:%d",min);

}
