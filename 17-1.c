#include <stdio.h>

void MaxAndMin(int arr[], int len, int **maxPtr, int **minPtr)
{
    *maxPtr = *minPtr = &arr[0];
    for (int i = 0; i < len; i++)
    {
        if (**maxPtr < arr[i])
            *maxPtr = &arr[i];

        if (**minPtr > arr[i])
            *minPtr = &arr[i];
    }
}

int main()
{
    int arr[5] = {0};
    int *maxPtr, *minPtr;

    for (int i = 0; i < 5; i++)
    {
        printf("�� �Է� : ");
        scanf("%d", &arr[i]);
    }

    MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);

    printf("���� ū �� : %d \n���� ���� �� : %d \n", *maxPtr, *minPtr);

    return 0;
}