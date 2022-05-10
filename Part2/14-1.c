#include <stdio.h>

void no1();
int no1_CallByValue(int n);
void no1_CallByRefer(int *n);
void no2_Swap3(int *, int *, int *);
int main()
{
    int n = 0, m = 0, o = 0;

    printf("������ �ٲ� �� ���� �� �Է� : ");
    scanf("%d %d %d", &n, &m, &o);

    no2_Swap3(&n, &m, &o);

    printf("���� ���� �� : %d %d %d \n", n, m, o);

    return 0;
}

void no1()
{
    int n = 0;

    printf("������ ����� ���� ? ");
    scanf("%d", &n);

    printf("n�� �� : %d \n", n);
    printf("Call-by-value �� ���� ��� : %d,  ���� n�� �� : %d \n", no1_CallByValue(n), n);
    no1_CallByRefer(&n);
    printf("Call-by-value �� ���� ��� �� n�� �� : %d \n", n);
}

int no1_CallByValue(int n)
{
    return n * n;
}

void no1_CallByRefer(int *n)
{
    *n *= *n;
}

void no2_Swap3(int *n, int *m, int *o)
{
    int temp = 0;

    temp = *m;
    *m = *n;
    *n = *o;
    *o = temp;
}