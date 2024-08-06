#include <stdio.h>
void main()
{
    int rect_length, rect_bredth, rect_area, rect_perimeter;
    printf("enter the length of rectangle:");
    scanf("%d", &rect_length);
    printf("enter the breath of recangle:");
    scanf("%d", &rect_bredth);
    rect_area = rect_length * rect_bredth;
    rect_perimeter = 2 * (rect_length + rect_bredth);
    if (rect_area > rect_perimeter)
    {
        printf("the area of rectangle is %d is greater than perimeter %d",rect_area,rect_perimeter);
    }
    else
    {
        printf("the perimeter is %d greater than area %d",rect_perimeter,rect_area);
    }
}