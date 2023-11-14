#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char ch;
    FILE *fp = NULL;
    fp = fopen("kp.txt", "r");
    if(fp == NULL)
    {
        printf("error");
        exit(1);
    }
    ch = fgetc(fp);
    printf("%c", ch);
    fclose(fp);
}