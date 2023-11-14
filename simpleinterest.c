#include<stdio.h>
void sI(float p, float r, float t);
void main()
{
    float p, r, t;
    printf("enter the value of p,r, and t");
    scanf("%f%f%f",&p, &r, &t);
    sI(p,r,t);
} 
void sI(float p, float r, float t)
{
    float si = (p*r*t)/100;
    printf("the si is %f", si);
}