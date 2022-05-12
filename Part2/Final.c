#include <stdio.h>

void No1_PrintOdd(int n[], int len);
void No1_PrintEven(int n[], int len);
void No1();
void No2_Print2Zin(int);
void No2();
void No3();
int No4_GetStrLen(char *);
int No4_IsPalind(char *, int);
void No4();
void No5_DesSort(int *, int);

int main()
{
    int n[7] = {0};
    int len = sizeof(n) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        printf("�Է� : ");
        scanf("%d", &n[i]);
    }

    No5_DesSort(n, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", n[i]);
    }

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

void No3()
{
    int n[10] = {0};
    int m = 0;

    puts("�� 10���� ���� �Է�");
    for (int i = 0, j = 0, k = 1; i < 10; i++)
    {
        printf("�Է� : ");
        scanf("%d", &m);

        if (m % 2)
            n[j++] = m;
        else
            n[10 - k++] = m;
    }

    printf("�迭 ����� ��� : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", n[i]);
}

int No4_GetStrLen(char *str)
{
    int cnt = 0;

    while (1)
    {
        if (str[cnt] == 0)
            break;

        cnt++;
    }

    return cnt;
}

int No4_IsPalind(char *str, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
            return 0;
    }

    return 1;
}

void No4()
{
    char str[100] = {0};
    int len = 0;

    printf("���ڿ� �Է�: ");
    scanf("%s", str);

    len = No4_GetStrLen(str);
    printf("���ڿ��� ���̴� %d �Դϴ� \n", len);
    printf("�� ���ڿ��� %s  \n", No4_IsPalind(str, len) ? "ȸ���Դϴ�" : "ȸ���� �ƴմϴ�");
}

void No5_DesSort(int *n, int len)
{
    int temp = 0;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (n[j] < n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }
}