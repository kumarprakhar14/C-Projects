#include<stdio.h>
#include<conio.h>
void main()
{
    int A[2], B[2], i, j;
    printf("enter array elements");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
         scanf("%d", &A[i][j]);
        }
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            B[i][j]= A[j][i]; 
        }
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("%d", B[i][j]);
            }
        }
    }
    getch();
}