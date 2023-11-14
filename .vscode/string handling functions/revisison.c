#include<stdio.h>
void main()
{
    int i, n;float s = 0;
    printf("enter the value of n \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        s = s + 1/i;
    }
    printf("%d", s);
    
}


