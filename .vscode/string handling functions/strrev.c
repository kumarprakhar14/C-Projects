#include<stdio.h>
#include<string.h>
void main()
{
    char str[10], str2[10];
    printf("Enter the string to reverse it");
    scanf("%s",&str);
    str2[10] = strrev(str);
    printf("%s", str2);
}