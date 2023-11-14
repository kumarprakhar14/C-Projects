#include<stdio.h>
void main()
{
    int n, i, flag = 0;
    printf("enter a no.");
    scanf("%d", &n);

    if(n==0 || n==1)
    {
        printf("neither prime nor composite");
        return;
    }
   
    for(i=2; i<=n/2; i++)
    {
       int remainder = n%i;
       if(remainder == 0)
       {
        flag = flag + 1;
       }
    }
    if(flag>2)
    {
        printf("composite no.");
    }
    else
    {
        printf("prime no.");
    }
}