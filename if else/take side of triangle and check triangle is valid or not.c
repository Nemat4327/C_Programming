#include <stdio.h>
void main()
{
    int side_1, side_2, side_3;
    printf("enter the first side:");
    scanf("%d", &side_1);
    printf("enter the second side:");
    scanf("%d", &side_2);
    printf("enter the third side:");
    scanf("%d", &side_3);
    if (side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_1 + side_3 > side_2)
    {
        printf("it is a valid triangle");
    }
    else
    {
        printf("it is not a valid triangle");
    }
}