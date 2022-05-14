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

    /* 초기화 */
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            n[i][j] = cnt++;

    /* 4번 반복한다. 뭐를? */
    for (int i = 0; i < 4; i++)
    {
        /* 90도 회전을 */
        No1_PrintArr(sizeof(n) / sizeof(n[0]), n); // 출력

        for (int j = 0; j < 4; j++)
        {
            for (int o = 0; o < 4; o++)
            {
                m[o][3 - j] = n[j][o]; // 임시 배열 m 에 n값을 1개씩 회전해서 넣고
            }
        }

        for (int j = 0; j < 4; j++)
            for (int o = 0; o < 4; o++)
                n[j][o] = m[j][o]; // m을 n에 덮어씌운다.

        puts("");
    }
}

void No2()
{
    int n = 0, m = 1;
    int o[100][100] = {0};
    printf("숫자를 입력하시오 : ");
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

    if (n % 2) // 만약 홀수면,  달팽이 배열의 정 가운데를 채워준다.
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