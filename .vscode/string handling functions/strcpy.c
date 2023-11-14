#include<stdio.h>
#include<string.h>
void main()
{
    char str[10], str2[10] = "Hello";
    printf("enter string");
    scanf("%s", &str);
    strcpy(str, str2);
    printf("%s", str);

}