// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int A[10], n, i, c;
//     printf("Enter 10 integer numbers");
//     for(i=0; i<10; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     printf("Enter the number to search");
//     scanf("%d", &n);
//     for(i=0; i<10; i++)
//     {
//         if(A[i]==n)
//        break; 
//     }
//     if(i<10)
//     {
//         printf("successful");
//     }
//     else
//     {
//         printf("unsuccessful");
//     }

// }


#include<stdio.h>
#include<conio.h>
void main()
{
    int A[10], n, i, flag=0;
    printf("Enter array A\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the number to search for\n");
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(A[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Unsucessful");
    }
    else
    {
        printf("%dSuccessful");
    }
    }
