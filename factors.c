#include<stdio.h>
void main()
{
    int n, i;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("the factors of the number are= ");
    for(i=1; i<= n; i++)
    {
        int remainder = n%i;
        if( remainder == 0){
        printf("%d ", i); 
        }
    }
}