#include<stdio.h>
void main()
{
    int n, i, j;
    printf("enter the no. of columns");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
            
        }
        printf("\n");
    }
   
    }