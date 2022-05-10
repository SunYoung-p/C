#include <stdio.h>

void No1();
void No2();
void No2_PrintGoGoDan(int, int);
void No3();
void No3_Uclid_hoje();
void No4();
void No5();
void No6();
void No7();
int No8(int);

int main()
{
    int n = 0;

    printf("정수 입력 : ");
    scanf("%d", &n);

    printf("2의 %d승은 %d \n", n, No8(n));

    return 0;
}

int No8(int n)
{
    if (n == 0)
        return 1;

    return 2 * No8(n - 1);
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

void No3()
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
}

void No3_Uclid_hoje()
{
    int n = 0, m = 0, o = 0, re = 1, flag = 0;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &n, &m);

    while (n != 0 && m != 0)
    {
        while (m != 0 && n > m)
        {
            n = n % m;
            printf("n : %d \n", n);
        }

        while (n != 0 && m > n)
        {
            m = m % n;
            printf("m : %d \n", m);
        }
    }

    printf("두 수의 최소 공약수 : %d \n", n ? n : m);
}

void No4()
{
    int m = 1, n = 1, o = 1;
    int money = 0;

    printf("현재 당신이 소유하고 있는 금액 : ");
    scanf("%d", &money);

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            for (int k = 1; k < 6; k++)
            {
                if (money - (500 * i + 700 * j + 400 * k) == 0)
                {
                    printf("크림빵 : %d개, 새우깡 %d개, 콜 라 %d 개 \n", i, j, k);
                    break;
                }
            }
        }
    }

    printf("어떻게 구입하시겠습니까? \n");
}

void No5()
{
    int n = 2, cnt = 0;
    while (cnt < 10)
    {
        int re = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                re = 0;
                break;
            }
        }

        if (re)
        {
            printf("%d ", n);
            cnt++;
        }

        n++;
    }
}

void No6()
{
    int n = 0;

    printf("초 입력 : ");
    scanf("%d", &n);

    printf("[h:%d, m:%d, s:%d] \n", n / 3600, (n % 3600) / 60, (n % 3600) % 60);
}

void No7()
{
    int n = 0, cnt = 0;

    printf("상수 n 입력 ? ");
    scanf("%d", &n);

    while (1)
    {
        if (1 << cnt > n)
        {
            printf("공식을 만족하는 k의 최대값은 %d \n", cnt - 1);
            break;
        }
        cnt++;
    }
}