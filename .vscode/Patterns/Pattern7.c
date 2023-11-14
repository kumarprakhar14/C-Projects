#include<stdio.h>
void main()
{
    int n, i, j;
    printf("enter the no. of columns\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ",(64+i));
        }
        printf("\n");
    }
}