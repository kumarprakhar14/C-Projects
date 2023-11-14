#include<stdio.h>
#include<string.h>
void main()
{
    char S1[10], S2[10], S3[20];
    printf("Enter two strings");
    scanf("%s%s", &S1, &S2);
    S3[20] = strcat(S1,S2);
    printf("%s", S3);
}