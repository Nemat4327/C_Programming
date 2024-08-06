#include<stdio.h>
void main()
{
    int num1,num2,i,count,j;
    printf("enter start_nuumber:");
    scanf("%d",&num1);
    printf("enter end_number:");
    scanf("%d",&num2);
    printf("perfect numbers are:\n");
    for(i=num1; i<=num2; i++)
    {   
        count=0;
        for(j=1; j<=i-1; j++)
        {
            if(i%j==0)
            {
                count=count+j;
            }
          
        }
         if(count==i)
        printf("%d is perfect number\n",i);
        
    }
}