#include<stdio.h>
void main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];                               //decleration of the array of size n (size of array > 0) and name is arr 
	printf("enter the element in array:\n");
	for(int i=0; i<=n-1; i++)                  // i represents the indexes of the array 
		scanf("%d",&arr[i]);
	printf("the elements are:\n");
	for(int j=0; j<=n-1; j++)
		printf("%d  ",arr[j]);
}