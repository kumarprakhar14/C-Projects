#include<stdio.h>
void printFibonacci(int n);
void main()
{
    int n;
    printf("enter the no. of terms");
    scanf("%d", &n);
    printf("%d %d", 0, 1);
    printFibonacci(n-2);
}
 void printFibonacci(int n)
{
    static int n1=0, n2=1, n3;
    /*static int: this data type stores value till whole
    prpgram even after the fuction is completely executed*/
    if(n>0)
    {
    n3= n1+n2;
    n1=n2;
    n2=n3;
    printf(" %d", n3);
    printFibonacci(n-1);
    }
}
