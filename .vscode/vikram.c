#include<stdio.h>
int main()
{
int i,a,fact=1;
printf("enter the value of a");
scanf("%d",&a);
for(i=1; i<=a;i++)
{
fact=fact*i;
}
printf("the value of factorail:is a %d", fact);
return 0;
}