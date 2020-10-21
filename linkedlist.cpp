#include <stdio.h>
#include <stdlib.h>
// #include <malloc.h>

struct node
{
    int info;
    struct node *next;

} * start;

void main()
{
    int choice, item;
    struct node *p;
    start = NULL;
    while (1)
    {
        printf("\n1.Insert\n2.Delete\n3.Print\nEnter Your Choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            struct node *temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter the number you want to Insert: \n");
            scanf("%d", &item);
            temp->info = item;
            temp->next = NULL;
            if (start == NULL)
                start = temp;
            else
            {
                p = start;
                while (p->next != NULL)
                    p = p->next;
                p->next = temp;
            }
            break;
        case 2:
            if (start == NULL)
                printf("No elements to delete\n");
            else
            {
                p = start;
                start = start->next;
                printf("Deleted Element is: %d\n", p->info);
                free(p);
            }
            break;
        case 3:
            if (start == NULL)
                printf("No Elements");
            else
            {
                p = start;
                while (p != NULL)
                {
                    printf("%d\t", p->info);
                    p = p->next;
                }
            }
            break;
        default:
            exit(0);
        }
    }
}