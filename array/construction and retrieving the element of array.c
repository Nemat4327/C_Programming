#include<stdio.h>
void main()
{
    int arr[5] = {10, 20, 30, 40, 50};           // decleration and initialization of array of size 5 # note (size of array always > 0 positive)
    printf("the element of the arrays are:\n");
    printf("%d ",arr[0]);                        // max index= size of array - 1
    printf("%d ",arr[1]);                        //here size of array is 5 that's why we can use the index 0 to 4 only
    printf("%d ",arr[2]);                        //retrieving the value of array by using index arr[1],arr[2],arr[3],arr[4]
    printf("%d ",arr[3]);
    printf("%d ",arr[4]);
}


