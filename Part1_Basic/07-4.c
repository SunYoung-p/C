#include <stdio.h>
void no1();
void no2();

int main()
{
    no1();

    return 0;
}

void no1()
{
    int n = 0, m = 0, sum = 0;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &n, &m);

    for (; n <= m; n++)
        sum += n;

    printf("두 수 사이 값의 합계 : %d \n", sum);
}

void no2()
{
    int n = 0, re = 1;

    printf("계승을 구할 수 입력 : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        re *= i;

    printf("팩토리얼 결과 : %d \n", re);
}