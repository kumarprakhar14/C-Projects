#include<stdio.h>
struct distance
{
    int inch;
    int feet;
}x,y,z;
void main()
{
    printf("enter the distance as below:\n _ feet _inch\n");
    printf("enter the first distance");
    scanf("%d%d", &x.feet, &x.inch);
    printf("enter the second distance");
    scanf("%d%d", &y.feet, &y.inch);
    z.inch = x.inch+y.inch;
    z.feet = x.feet+y.feet;
    while(z.inch>=12)
    {
        z.feet = z.feet + 1;
        z.inch = z.inch - 12;
    }
    printf("The sum of distance is %d feet %d inch", z.feet, z.inch);
}