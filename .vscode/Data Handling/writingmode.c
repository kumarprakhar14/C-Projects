#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char A[50];
    FILE *fp = NULL;
    fp = fopen("kp.txt", "w");
    if(fp == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter ur name");
    gets(A); //used to scan a string
    for(int i=0; i!=strlen(A); i++)
    {
    fputc(A[i], fp);
    }
    fclose(fp);
}