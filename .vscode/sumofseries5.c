#include<stdio.h>
void main()
{
   int n; float sum = 0;
   printf("enter n");
   scanf("%d", &n);
   for(float i=1; i<=n; i++)
   {
    sum = sum+1/i;
   } 
   printf("%f", sum);
}