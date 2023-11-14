/**************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

***************************/
#include <stdio.h>
#include<conio.h>
void main()
{
    char n[20];int i=0,l=0,j, o[20];
    printf("enter string");
    
    scanf("%s",&n);
    while(n[i]!='\0')
    {
        l=l+1;
        i++;
    }
    j=l-1;
    
  for  (i=0;i<l;i++)
    {
        o[i] = n[j];
        j--;
    }
        printf("%s",o);
    
}