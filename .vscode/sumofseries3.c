#include<stdio.h>
void main()
{
    int n, sum=0;
    printf("enter n");
    scanf("%d", &n);
    for(int i=1; i<=n; i=i+2)
    {
        sum = sum+i*i*i;
    }
    printf("%d", sum);
}