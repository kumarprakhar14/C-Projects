#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void main(){
    struct node* start = NULL, *new1;
    int ch;
    
    while(1){
        new1 = (struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &new1->data);
        if(start == NULL){
            new1->next = NULL;
            start = new1;
        }
        else{
            new1->next = start;
            start = new1;
        }
        printf("Do you want to continue? 1 for 'yes' and 0 for 'no'");
        scanf("%d", &ch);
        if(ch == 0)
        break;
    }
        
        while (start != NULL)
        {
            printf("%d\t", start->data);
            start = start->next;
        }
}