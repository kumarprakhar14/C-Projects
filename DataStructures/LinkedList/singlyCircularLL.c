#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};
void main(){
    struct node *start = NULL, *new1, *t;
    int ch;
    while (1)
    {
        new1 = (struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", &new1->data);

        if(start == NULL){
            new1->next = new1;
            start = new1;
        }
        else{
            t = start;
            while (t->next != start){
               t = t->next;
            }
            t->next = new1;
            new1->next = start;
        }
        printf("Want to continue? 1 for yes and 0 for no.");
        scanf("%d", &ch);
        if(ch==0){
            break;
        }
    }
    //resetting temporary variable t to the start.
    t = start;

    //printing the list
    do
    {
      printf("%d\t", t->data);
      t = t->next; 
    }
    while (t != start);
    

}
