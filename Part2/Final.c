#include <stdio.h>

void No1_PrintOdd(int n[], int len);
void No1_PrintEven(int n[], int len);
void No1();
void No2_Print2Zin(int);
void No2();

int main()
{

    return 0;
}

void No1_PrintOdd(int n[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (n[i] % 2)
            printf("%d ", n[i]);
    }

    puts("");
}
void No1_PrintEven(int n[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (n[i] % 2 == 0)
            printf("%d ", n[i]);
    }

    puts("");
}

void No1()
{
    int n[10] = {0};

    printf("�� 10���� ���� �Է� \n");
    for (int i = 0; i < 10; i++)
    {
        printf("�Է� : ");
        scanf("%d", &n[i]);
    }

    printf("Ȧ�� ��� : ");
    No1_PrintOdd(n, sizeof(n) / sizeof(int));
    printf("¦�� ��� : ");
    No1_PrintEven(n, sizeof(n) / sizeof(int));
}

void No2_Print2Zin(int n)
{
    if (n <= 0)
        return;

    No2_Print2Zin(n / 2);
    printf("%d", n % 2);
}

void No2()
{
    int n = 0;

    printf("10���� ���� �Է� : ");
    scanf("%d", &n);

    No2_Print2Zin(n);
}