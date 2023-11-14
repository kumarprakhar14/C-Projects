#include<stdio.h>
void swap(int a, int b);
void main()
{
    int a, b;
    printf("enter the value of a and b");
    scanf("%d%d", &a, &b);
    swap(a,b);
}
swap(int a, int b)
{
    int c;
    c=a;
    a=b; 
    b=c;
    printf("the swapped value of a & b is %d %d", a, b);
}