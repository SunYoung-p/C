#include <stdio.h>

void no1();

int main()
{
    char n[] = "Good time";

    printf("n의 값 : %s \n", n);

    for (int i = 0; i < sizeof(n); i++)
        printf("%c ", n[i]);

    return 0;
}

void no1()
{
    int arr[5] = {0};
    int max = 0, min = 0, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]의 값을 입력 : ", i);
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for (int j = 0; j < 5; j++)
    {
        if (arr[j] > max)
            max = arr[j];

        if (arr[j] < min)
            min = arr[j];

        sum += arr[j];
    }

    printf("arr 배열 값 중 최소값 : %d \n", min);
    printf("arr 배열 값 중 최대값 : %d \n", max);
    printf("arr 배열 값의 총 합 : %d \n", sum);
}