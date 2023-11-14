#include<stdio.h>
void main()
{
    int arr[10] = {2, 5, 1, 8, 3};
    int size = 5;

    //print the initial array
    for(int i=0; i<=4; i++){
        printf("%d ", arr[i]);
    }

    int n, x;

    printf("\nenter the element to insert");
    scanf("%d", &n);

    printf("enter the position at which element is to be inserted\n");
    scanf("%d", &x);

    //shifting operation

    if(x <= 4){
        for(int i=size; i>x; i--){
            arr[i] = arr[i-1]; 
        }
        
    }
    else{
        printf("index out of bound\n");
    }
    arr[x] = n;
    size++;

    //printing the new array
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
}