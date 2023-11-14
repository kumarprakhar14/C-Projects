#include<stdio.h>
int fact(int n);
void main()
{
    int n, f;
    printf("enter n");
    scanf("%d",&n);
    f = fact(n);
    printf("the factorial of n is %d", f);
}
int fact(int n)
{
    int factorial = 1;
    for(int i=1; i<=n; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}