#include <stdio.h>

void No1();
void No2();
void No2_PrintGoGoDan(int, int);

int main()
{
    int n = 0, m = 0, o = 0, re = 1;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &n, &m);

    if (n < m)
        o = n;
    else
        o = m;

    for (int i = 2; i <= o; i++)
    {
        if (n % i == 0 && m % i == 0)
            re = i;
    }

    printf("두 수의 최대 공약수 : %d \n", re);

    return 0;
}

void No1()
{
    int n = 0;

    printf("10진수 정수 입력 : ");
    scanf("%d", &n);

    printf("%d 를 16진수로 변환한 결과 : %x \n", n, n);
}

void No2()
{
    int n = 0, m = 0;

    printf("구구단 출력을 위한 두 수 입력 : ");
    scanf("%d %d", &n, &m);

    if (n < 1 || m < 1)
    {
        printf("입력이 잘못되었습니다.");
        return;
    }

    No2_PrintGoGoDan(n, m);
}

void No2_PrintGoGoDan(int n, int m)
{
    if (n > m)
    {
        int temp = 0;

        temp = n;
        n = m;
        m = temp;
    }

    for (; n <= m; n++)
    {
        for (int j = 1; j <= 9; j++)
            printf("%d x %d = %d \n", n, j, n * j);

        puts("");
    }
}