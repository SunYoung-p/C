#include <stdio.h>

void No1();
void No2();
void No2_PrintGoGoDan(int, int);

int main()
{
    int n = 0, m = 0, o = 0, re = 1;

    printf("�� ���� ���� �Է� : ");
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

    printf("�� ���� �ִ� ����� : %d \n", re);

    return 0;
}

void No1()
{
    int n = 0;

    printf("10���� ���� �Է� : ");
    scanf("%d", &n);

    printf("%d �� 16������ ��ȯ�� ��� : %x \n", n, n);
}

void No2()
{
    int n = 0, m = 0;

    printf("������ ����� ���� �� �� �Է� : ");
    scanf("%d %d", &n, &m);

    if (n < 1 || m < 1)
    {
        printf("�Է��� �߸��Ǿ����ϴ�.");
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