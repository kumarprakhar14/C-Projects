#include<stdio.h>
#include<math.h>
void main()
{
    int n, sum = 0;
    printf("enter n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
    sum = sum+i*pow(-1,i);
}
printf("%d is the sum of the series", sum);
}
