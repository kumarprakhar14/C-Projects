#include<stdio.h>
#include<conio.h>
void main()
{
    int A[2][2], i, j;
    printf("Enter array elemets\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
        printf("%d", A[i][j]);
        printf(" ");
    }
     printf("\n");
    
    }
}