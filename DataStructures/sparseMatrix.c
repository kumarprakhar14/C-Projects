// implementation of sparse matrix.

#include<stdio.h>
void main(){
 int a[10][10], n, m, sp[10][3], i, j, c = 0;
 printf("Enter n*m");
 scanf("%d%d", &n, &m);
 printf("Enter array elements.");
 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        scanf("%d", &a[i][j]);
    }
 }

 for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        if(a[i][j] != 0){
            c++;
        }
    }
 }
 sp[0][0] = n;
 sp[0][1] = m;
 sp[0][2] = c;
 int k = 1;

 for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        if(a[i][j] != 0){
            sp[k][0] = i;
            sp[k][1] = j;
            sp[k][2] = a[i][j];
            k++;
        }
    }
 }
    printf("The sparse matrix in 3-column representation is:\n");
    for(i=0; i<k; i++){
        for(j=0; j<3; j++){
            printf("%d ", sp[i][j]);
        }
        printf("\n");
    }
}