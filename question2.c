#include<stdio.h>
void main()
{
    int a = 4, b, c, d, e, f=5, g, h;
    b= a<<1;
    c= a>>2;
    d= a&f;
    e= a|f;
    g= ~a;
    h= ~f;
    printf("%d",b);
    printf("\n%d",c);
    printf("\n%d",d);
    printf("\n%d",e);
    printf("\n%d",g);
    printf("\n%d",h);
}