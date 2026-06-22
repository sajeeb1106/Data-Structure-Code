#include <stdio.h>

int main()
{
    int n, Svalue;
    int BEG, END, MID;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    if (n == 0)
    {
        printf("Array is empty\n");
        return 0;
    }
    else
    {
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("\nEnter search value: ");
        scanf("%d", &Svalue);

        BEG = 0;
        END = n - 1;

        while (BEG <= END)
        {
            MID = (BEG + END) / 2;

            if (arr[MID] == Svalue)
            {
                printf("\nValue is found at index %d\n", MID);
                return 0;
            }

            if (arr[MID] > Svalue)
            {
                END = MID - 1;
            }
            else
            {
                BEG = MID + 1;
            }
        }

    }
    printf("\nValue is not found\n");

    return 0;
}