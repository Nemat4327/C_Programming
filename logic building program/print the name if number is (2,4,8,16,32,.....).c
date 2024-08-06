//code for printing the name name if the i/p is (2,4,8,16,32,.....)otherwise print city name.

#include<stdio.h>
void main()
{   
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if((number & (number-1)) == 0)
        printf("o/p>: my name is NEMAT");
    else
        printf("o/p>>: i live in MUMBAI");
}

/*EXPLANAION:
           1) any number which is 2^k where k=1,2,3,4,5,..... then print name 
           2) any number which is 2^k have only one 1 and rest will 0 in binary e.g. (8=2^3 binary 1000) and (16=2^4 binary 10000) 
           3) any number which is 2^k-1 have only one 0 and rest will 1 in binary e.g. (7=2^3-1 binary 0111) and (16=2^4-1 binary 01111)
           4)logic:
                 if 2^k & 2^k -1 == 0  e.g. (2^2 & 2^2-1=4&3=0100 & 0111==0000) 
                 print name 
                 else city name*/
