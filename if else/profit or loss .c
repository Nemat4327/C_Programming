#include<stdio.h>
void main()
{
    int cost_price,selling_price; 
    printf("\n*********************profit or loss program*****************\n\n");
    printf("enter the cost price:");
    scanf("%d",&cost_price);
    printf("enter the selling price:");
    scanf("%d",&selling_price);
    if (cost_price > selling_price)
    {
        printf("loss of rupess %d", cost_price - selling_price);
    }
    else if(cost_price < selling_price)
    {
        printf("profit of rupees %d", selling_price - cost_price);
    }
    else
    {
        printf("no profit no loss");
    }
}

