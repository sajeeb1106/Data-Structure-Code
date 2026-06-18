#include<stdio.h>

int main()
{
    int i, pos, n, value;

    printf("Enter Element: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter the element number %d(Index number %d): ", i + 1, i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position to update: ");
    scanf("%d", &pos);

    printf("Enter updated value: ");
    scanf("%d", &value);

    if(pos > n || pos < 1)
    {
        printf("Update is not possible.\n");
    }
    else
    {
        arr[pos] = value;

        printf("Final Result: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}