#include<stdio.h> 
void main()
{
    int a[5], b[5], i, j;
    printf("enter array elements");
    for(i=0; i<5; i++)
    {
    scanf("%d", &a[i]);
    }

    j=4;
    for(i=0; i<j-1; i++)
    {
        b[i] = a[j];
        j--;
    }
    for(i=0; i<5; i++)
    {
        printf("%d", b[i]);
    }
}