#include<stdio.h>
void main()
{
    char n[20], o[20]; int i=0, l=0, j;
    printf("enter string\n");
    scanf("%s", &n);
    while(n[i]!= '\0');
    {
        l= l+1;
        i++;
    }
    j = l-1;
    for(i=0; i<l; i++)
    {
        o[i] = n[j];
        j--;
    }
    printf("%s", o);
}