//Insert a node in a linkedlist at any location.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void main(){
struct node *start = NULL, *new1, *t;
int ch, loc;

//ALAST
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
    printf("The list is:\n");
    t = start; 
    while (t != NULL) {
        printf("%d\t", t->data);
        t = t->next;
    }


    //insertion
    new1 = (struct node*) malloc(sizeof(struct node));
    printf("Enter the new node to insert.");
    scanf("%d", &new1->data);
    printf("Enter the location at which node to insert.");
    scanf("%d", &loc);

    //inserttion at beginning 
    if(loc==1){
        new1->next = start;
        start = new1;
    }
    //insertioin at mid or  last
    else{
        t = start;
        for(int i=1; i<=loc-2; i++){
            t = t->next;
        }
        new1->next = t->next;
        t->next = new1;
    }

    printf("The new list is:\n");
    t = start;
    while (t != NULL) {
        printf("%d\t", t->data);
        t = t->next;
    }
    
 }