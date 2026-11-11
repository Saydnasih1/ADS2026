#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue()
{
    int value;

    if(rear == SIZE - 1)
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        printf("Enter the element: ");
        scanf("%d", &value);

        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("Element inserted successfully.\n");
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;

        if(front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements are:\n");

        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n--- QUEUE OPERATIONS ---\n");
        printf("1. Enqueue (Insertion)\n");
        printf("2. Dequeue (Deletion)\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}

