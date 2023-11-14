#include<stdio.h>
#include<math.h>

/*sum of the series
-1+2-3+4-5......n*/

void main()
{
    int i, n, s=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s = s+i*pow(-1,i);
    }
    printf("%d",s);
}