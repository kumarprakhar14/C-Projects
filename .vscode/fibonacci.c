#include<stdio.h>
void main()
{
    int n1=0, n2=1, n3, i, sum = 1, number;
    printf("enter the no. of elements");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);
    for(i=2; i<number; i++)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
        sum = sum + n3;
    }
    printf("\nsum = %d", sum);
}