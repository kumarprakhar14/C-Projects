// forward series

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n, s=0, i;
//     printf("enter n");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++)
//     {
//     s = s+i;
//     }
//     printf("the sum is %d", s);
//     getch();
// }

// reverse series -> 5+4+3+2+1

#include<stdio.h>
void main()
{
    int s= 0, n;
    printf("enter n");
    scanf("%d", &n);
    for(int i=n; i>=1; i--)
    {
      s = s+i;  
    }
    printf("the sum is %d", s);
}