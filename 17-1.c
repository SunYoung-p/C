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
        printf("수 입력 : ");
        scanf("%d", &arr[i]);
    }

    MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);

    printf("가장 큰 수 : %d \n가장 작은 수 : %d \n", *maxPtr, *minPtr);

    return 0;
}