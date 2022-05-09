#include <stdio.h>

void no1();
void no3();
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}, temp = 0;
    int *p1 = 0, *p2 = 0;

    p1 = &arr[0];
    p2 = &arr[5];

    for (int i = 0; i < 3; i++)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2--;
    }

    for (int j = 0; j < 6; j++)
        printf("arr 배열의 수정 후 값 : %d \n", arr[j]);

    return 0;
}

void no1()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
        *(ptr + i) += 2;

    for (int j = 0; j < 5; j++)
        printf("arr[%d] 의 값 : %d \n", j, arr[j]);
}

void no3()
{
    int arr[5] = {1, 2, 3, 4, 5}, sum = 0;
    int *ptr = &arr[4];

    for (int i = 0; i < 5; i++)
    {
        sum += *ptr--;
    }

    printf("arr 배열의 모든 원소의 합 : %d \n", sum);
}