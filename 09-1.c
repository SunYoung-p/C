#include <stdio.h>

int GetMaxNum(int, int, int);
int GetMinNum(int, int, int);
void no1();

double CelToFah(int);
double FahToCel(int);
void no2();

void GetFivo(int);
int main()
{
    int n = 0;

    printf("�Ǻ���ġ ���� �� �� ��� ? ");
    scanf("%d", &n);

    GetFivo(n);

    return 0;
}

void GetFivo(int cnt)
{
    int re = 0, n = 0, m = 1;

    for (int i = 0; i < cnt; i++)
    {
        if (i < 2)
        {
            printf("%d ", i);
            continue;
        }
        re = n + m;
        printf("%d ", re);

        n = m;
        m = re;
    }
}

void no2()
{
    printf("���� �µ� 30�� ȭ�� �µ��� ��ȯ : %lf \n", CelToFah(30));
    printf("ȭ�� �µ� 50�� ���� �µ��� ��ȯ : %lf \n", FahToCel(50));
}

double CelToFah(int n)
{
    return (n - 32) / 1.8;
}

double FahToCel(int n)
{
    return 1.8 * n + 32;
}

void no1()
{
    int n = 0, m = 0, o = 0;

    printf("ũ�⸦ ���� �� ���� �� �Է� : ");
    scanf("%d %d %d", &n, &m, &o);

    printf("ũ�Ⱑ ���� ū �� : %d \n", GetMaxNum(n, m, o));
    printf("ũ�Ⱑ ���� ���� �� : %d \n", GetMinNum(n, m, o));
}

int GetMaxNum(int n, int m, int o)
{
    if (n > m && n > o)
        return n;
    else if (m > n && m > o)
        return m;
    else
        return o;
}

int GetMinNum(int n, int m, int o)
{
    if (n < m && n < o)
        return n;
    else if (m < n && m < o)
        return m;
    else
        return o;
}