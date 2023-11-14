#include<stdio.h>
void main()
{
    int A[4], B[2][2], i, j;
    printf("Enter array elements\n");
    for(i=0; i<4; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0; i<4; i++)
    {
        printf("%d", A[i]);
    }
    printf("\nenter 2d array elements");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
        printf("%d", B[i][j]);
        }
    }

}
