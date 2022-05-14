#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void No1_PrintArr(int, int[][4]);
void No1();
void No2();
void No3();
void No4();
void No5();

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

void No3()
{
    for (int i = 0; i < 5; i++)
        printf("%d��° ���� : %d (0�̻� 99����) \n", i + 1, rand() % 100);
}

void No4()
{
    srand((int)time(NULL)); // �õ� �Է�

    printf("�ֻ��� 1�� ��� : %d \n", rand() % 6 + 1);
    printf("�ֻ��� 2�� ��� : %d \n", rand() % 6 + 1);
}

void No5()
{
    int n = 0, m = 0, o = 0, p = 0, re = 0;

    srand((int)time(NULL));

    do
    {
        printf("������ 1, ������ 2, ���� 3: ");
        scanf("%d", &o);
        p = rand() % 3 + 1;

        printf("����� %s ����, ��ǻ�ʹ� %s ����, ",
               o == 1 ? "����" : o == 2 ? "����"
                             : o == 3   ? "��"
                                        : "�߸� �Է��߽��ϴ�",
               p == 1 ? "����" : p == 2 ? "����"
                             : p == 3   ? "��"
                                        : "�߸��� ��");

        if (o == p)
        {
            printf("�����ϴ�! \n");
            m++;
        }
        else if ((o == 1 && p == 3) || (o == 2 && p == 1) || (o == 3 && p == 2))
        {
            printf("����� �����ϴ�! \n");
            re++;
        }
        else
        {
            printf("����� �̰���ϴ�! \n");
            n++;
        }

    } while (re == 0);

    printf("\n������ ��� : %d��, %d�� \n", n, m);
}