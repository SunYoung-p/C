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
    printf("�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &n, &m);

    for (; n <= m; n++)
        sum += n;

    printf("�� �� ���� ���� �հ� : %d \n", sum);
}

void no2()
{
    int n = 0, re = 1;

    printf("����� ���� �� �Է� : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        re *= i;

    printf("���丮�� ��� : %d \n", re);
}