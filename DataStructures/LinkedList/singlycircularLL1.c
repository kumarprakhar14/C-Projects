// insert a node to an existing singly circular LinkedList.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head = NULL, *new1, *t;
    int ch;
    while (1)
    {
        new1 = (struct node *)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &new1->data);
        if (head == NULL)
        {
            new1->next = new1;
            head = new1;
        }
        else
        {
            t = head;
            while (t->next != head)
            {
                t = t->next;
            }
            t->next = new1;
            new1->next = head;
        }
        printf("Want to continue?1 for yes and 0 for no.");
        scanf("%d", &ch);    
        if (ch == 0)
        {
            break;
        }
    }
    t = head;
    // insertion at a specied location
    int loc;
    printf("Enter the location of insertion.");
    scanf("%d", &loc);
    new1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter  data of new node.");
    scanf("%d", &new1->data);

    if (loc == 1)
    {
        while (t->next != head)
        {
            t = t->next;
        }
        t->next = new1;
        new1->next = head;
        head = new1;
    }
    else
    {
        t = head;
        for (int i = 0; i < loc - 2; i++)
        {
            t = t->next;
        }
        new1->next = t->next;
        t->next = new1;
    }
    t = head;
    // print
    do
    {
        printf("%d\t", t->data);
        t = t->next;
    } while (t != head);
}