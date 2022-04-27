#include <stdio.h>
void no1();
void no2();
void no3();

int main()
{
    no1();

    return 0;
}

void no1()
{
    // int total = 0, num = 1;

    // while (num!=0)
    // {
    //     printf("정수 입력 (0 to quit): ");
    //     scanf("%d", &num);
    //     total += num;
    // }

    int total = 0, num = 0;

    printf("정수 입력 (0 to quit): ");
    scanf("%d", &num);
    total += num;

    while (num != 0)
    {
        printf("정수 입력 (0 to quit): ");
        scanf("%d", &num);
        total += num;
    }

    printf("합계 : %d \n", total);
}

void no2()
{
    int sum = 0, n = 0;

    do
    {
        sum += n;
        n += 2;
    } while (n <= 100);

    printf("0이상 100이하의 정수 중에서 짝수의 합은 ? %d \n", sum);
}

void no3()
{
    int cur = 2;
    int is = 0;
    do
    {
        is = 1;
        do
        {
            printf("%d x %d = %d \n", cur, is, cur * is);
            is++;
        } while (is < 10);
        cur++;
        puts("");
    } while (cur < 10);
}