#include <stdio.h>

void no1();
void no2();
void no3();
void no4();

int main()
{
    int n = 0, cnt = 0;
    double m = 0, sum = 0;

    printf("�� ���� ���� �Է��� ���� ? ");
    scanf("%d", &n);

    cnt = n;
    while (n > 0)
    {
        printf("�� �Է� : ");
        scanf("%lf", &m);
        sum += m;
        n--;
    }

    printf("��� �Է� ���� ��� : %f", sum / cnt);

    return 0;
}

void no1()
{
    int n = 0;

    printf("Hello World �� �� �ݺ� ? ");
    scanf("%d", &n);

    while (n)
    {
        printf("Hello World ! \n");
        n--;
    }
}

void no2()
{
    int n = 0, i = 1;

    printf("3�� ��� �� �� ��� ? ");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("%d ", 3 * i);
        n--;
        i++;
    }
}

void no3()
{
    int sum = 0, n = 1;

    while (n != 0)
    {
        printf("���ϰ� ���� �� �Է� (0 �Է� �� ����) : ");
        scanf("%d", &n);
        sum += n;
    }

    printf("��� ���� �� : %d \n", sum);
}

void no4()
{
    int n = 0, i = 9;

    printf("� �������� �������? ");
    scanf("%d", &n);

    while (n > 0 && i > 0)
    {
        printf("%d x %d = %d \n", n, i, n * i);
        i--;
    }
}