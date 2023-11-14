#include<stdio.h>
void main()
{
    float y= 4.2;
    int x= y;
    printf("%d",y);
    printf("\n%f",x);
    printf("\n%d",x);
    printf ("\n%f",y);
    //1st & 2nd output is garbage(why?) while 3rd & 4th output is correct.

}