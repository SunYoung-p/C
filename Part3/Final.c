#include <stdio.h>

void No1_PrintArr(int, int[][4]);
void No1();
void No2();

int main()
{

    return 0;
}

void No1_PrintArr(int len, int n[][4])
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
            printf("%3d", n[i][j]);

        puts("");
    }
}

void No1()
{
    int n[4][4] = {0};
    int cnt = 1;
    int temp = 0;
    int m[4][4] = {0};

    /* �ʱ�ȭ */
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            n[i][j] = cnt++;

    /* 4�� �ݺ��Ѵ�. ����? */
    for (int i = 0; i < 4; i++)
    {
        /* 90�� ȸ���� */
        No1_PrintArr(sizeof(n) / sizeof(n[0]), n); // ���

        for (int j = 0; j < 4; j++)
        {
            for (int o = 0; o < 4; o++)
            {
                m[o][3 - j] = n[j][o]; // �ӽ� �迭 m �� n���� 1���� ȸ���ؼ� �ְ�
            }
        }

        for (int j = 0; j < 4; j++)
            for (int o = 0; o < 4; o++)
                n[j][o] = m[j][o]; // m�� n�� ������.

        puts("");
    }
}

void No2()
{
    int n = 0, m = 1;
    int o[100][100] = {0};
    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d", &n);

    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int j = i; j < n - 1 - i; j++)
        {
            o[i][j] = m++;
        }

        for (int j = i; j < n - 1 - i; j++)
        {
            o[j][n - 1 - i] = m++;
        }

        for (int j = i; j < n - 1 - i; j++)
        {
            o[n - 1 - i][n - 1 - j] = m++;
        }

        for (int j = i; j < n - 1 - i; j++)
        {
            o[n - 1 - j][0 + i] = m++;
        }
    }

    if (n % 2) // ���� Ȧ����,  ������ �迭�� �� ����� ä���ش�.
        o[n / 2][n / 2] = m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", o[i][j]);
        }
        puts("");
    }
}