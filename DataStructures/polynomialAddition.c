#include<stdio.h>   
struct Poly
{
   int coeff;
   int exp;
};

void main(){
    struct Poly P1[10], P2[10], P3[10];
    int i, j, n=3, m=5;
    printf("Enter coefficients and exponents for P1:\n");
    for(i=0; i<n; i++){
        scanf("%d%d", &P1[i].coeff, &P1[i].exp);
    } 
    printf("Enter coefficients and exponents for P2:\n");
    for(i=0; i<m; i++){
        scanf("%d%d", &P2[i].coeff, &P2[i].exp);
    } 
    i = 0;
    j = 0;
    int k = 0;

    while (i<n && j<m)
    {
        if(P1[i].exp == P2[j].exp){
            P3[k].coeff = P1[i].coeff + P2[j].coeff;
            P3[k].exp = P1[i].exp;
            i++;
            j++;
            k++;
        }
        else if (P1[i].exp>P2[j].exp)
        {
            P3[k++] = P1[i+j];
        }
        else{
            P3[k++] = P2[i+j];
        }
    }

        while (i<n)
        {
            P3[k++] = P2[j++];
        }
        printf("Resultant polynomial after addition:\n");
        for(i=0; i<k; i++){
            printf("%d %d\n", P3[i].coeff, P3[i].exp);
        }
        
    }