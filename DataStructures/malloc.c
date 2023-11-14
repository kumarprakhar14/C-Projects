#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, i;
    int *p;
    printf("Enter the no. of terms.");
    scanf("%d", &n);

    p = (int*) malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p+i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p+i));
    }
    
    free(p);
}