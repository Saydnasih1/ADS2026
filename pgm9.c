#include <stdio.h>
#define SIZE 10

int hash(int key)
{
    return key % SIZE;
}

int main()
{
    int a[SIZE], key, index, i;

    for(i = 0; i < SIZE; i++)
        a[i] = -1;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &key);

        index = hash(key);

        if(a[index] == -1)
        {
            a[index] = key;
            printf("Element %d inserted at index %d\n", key, index);
        }
        else
        {
            printf("Collision occurred for %d\n", key);
        }
    }

    printf("\nHash Table:\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d : %d\n", i, a[i]);
    }

    return 0;
}

