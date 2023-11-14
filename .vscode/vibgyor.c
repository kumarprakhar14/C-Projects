#include<stdio.h>
#include<conio.h>
void main()
{
    int ch;
    scanf("%d",ch);
    switch(ch)
    {
        case 1:
        {
            printf("voilet");
            break;
        }
        case 2:
        {
            printf("indigo");
            break;
        }
        case 3: 
        {
            printf("blue");
            break;
        }
        case 4: 
        {
            printf("green");
        }
        break;
        case 5:
        {
            printf("yellow");
            break;
        }
        case 6: 
        {
            printf("orange");
            break;
        }
        case 7: 
        {
            printf("red");
            break;
        }
        default: 
        {
            printf("invalid input");
            break;
        }
    }
}