// count the no. of nodes in a given linkedlist

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *start = NULL, *t, *new1;
    int ch, count = 0;
    while (1)
    {
        new1 = (struct node *)malloc(sizeof(struct node));
        count++;
        printf("Enter data\n");
        scanf("%d", &new1->data);
        new1->next = NULL;
        if (start == NULL)
        {
            start = new1;
        }
        else
        {
            t = start;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = new1;
        }
        printf("Do you want to continue? 1 for yes and 0 for no");
        scanf("%d", &ch);
        if (ch == 0)
        {
            break;
        }
    }
    while (start != NULL)
    {
        printf("%d->", start->data);
        start = start->next;
    }
    printf("\nThe no. of nodes is: %d", count);
}
