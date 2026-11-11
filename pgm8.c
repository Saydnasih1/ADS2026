#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};

struct node *head = NULL;

void insert_begin()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->prev = NULL;
    newnode->next = head;

    if(head != NULL)
        head->prev = newnode;

    head = newnode;

    printf("Node inserted successfully.\n");
}

void insert_end()
{
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if(head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
        newnode->prev = temp;
    }

    printf("Node inserted successfully.\n");
}

void delete_begin()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        head = head->next;

        if(head != NULL)
            head->prev = NULL;

        printf("Deleted element: %d\n", temp->data);
        free(temp);
    }
}

void delete_end()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;

        if(temp->next == NULL)
        {
            printf("Deleted element: %d\n", temp->data);
            free(temp);
            head = NULL;
        }
        else
        {
            while(temp->next != NULL)
                temp = temp->next;

            temp->prev->next = NULL;

            printf("Deleted element: %d\n", temp->data);
            free(temp);
        }
    }
}

void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;

        printf("Doubly Linked List:\n");

        while(temp != NULL)
        {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n--- DOUBLY LINKED LIST ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete at Beginning\n");
        printf("4. Delete at End\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert_begin();
                break;

            case 2:
                insert_end();
                break;

            case 3:
                delete_begin();
                break;

            case 4:
                delete_end();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}

