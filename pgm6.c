#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value, choice, found;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n--- ARRAY OPERATIONS ---\n");
        printf("1. Display\n");
        printf("2. Insertion\n");
        printf("3. Deletion\n");
        printf("4. Searching\n");
        printf("5. Traversal\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                break;

            case 2:
                printf("Enter position and value: ");
                scanf("%d%d", &pos, &value);

                if(pos < 1 || pos > n + 1 || n >= 100)
                    printf("Invalid position or array is full!");
                else
                {
                    for(i = n; i >= pos; i--)
                        a[i] = a[i - 1];

                    a[pos - 1] = value;
                    n++;

                    printf("Element inserted successfully.");
                }
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n)
                    printf("Invalid position!");
                else
                {
                    for(i = pos - 1; i < n - 1; i++)
                        a[i] = a[i + 1];

                    n--;

                    printf("Element deleted successfully.");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(a[i] == value)
                    {
                        printf("Element found at position %d", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.");
                break;

            case 5:
                printf("Array traversal:\n");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                break;

            case 6:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 6);

    return 0;
}

