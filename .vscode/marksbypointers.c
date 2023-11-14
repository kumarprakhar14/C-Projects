#include<stdio.h>
void main()
{
    int A[5], *ptr, x=0, y=0, z;
    printf("enter ur marks");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &A[i]);
    }
    ptr = &A[0];
    printf("%d", *ptr);
    for(int i=0; i<5; i++)
    {
        if(*(ptr+i)>=50)
        {
        x = x + *(ptr+i);
        y = y+1;
        }
    }
    z = x/y;
    printf("The average is %f", z);

}