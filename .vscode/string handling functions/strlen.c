#include<stdio.h>
#include<string.h>
void main()
{
    char n[10]; 
    int l;
    printf("enter string to find its length\n");
    scanf("%s", &n);
    l = strlen(n);
    printf("%d is the length of entered string", l);
}