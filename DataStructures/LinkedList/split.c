#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void main(){
    struct node *start = NULL, *new1, *t, *start1, *temp;
    int ch, loc;
    
    //ABEG
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

    //split
    printf("enter the loc.");
    scanf("%d", &loc);
    t = start;
    for(int i=1; i<=loc-2; i++){
        t = t->next;
    }
    start1 = t->next;
    t->next = NULL;

    //print list 1
    temp = start;
    printf("List1: ");
      while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }

    //print list 2
    printf("\nList 2: ");
    temp = start1;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}