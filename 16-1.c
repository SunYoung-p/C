#include <stdio.h>

void no1();
void no2();
int main()
{
    int n[5][5] = {0};
    int s3 = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d 학생의 %d 번째 과목 점수 입력 : ", i + 1, j + 1);
            scanf("%d", &n[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int s1 = 0, s2 = 0;

        for (int j = 0; j < 4; j++)
        {
            s1 += n[i][j];
            s2 += n[j][i];
        }

        n[i][4] = s1;
        n[4][i] = s2;
    }

    for (int i = 0; i < 4; i++)
        s3 += n[4][i];

    n[4][4] = s3;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", n[i][j]);

        puts("");
    }

    return 0;
}

void no1()
{
    int n[3][9] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
            n[i][j] = (i + 2) * (j + 1);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
            printf("%d ", n[i][j]);

        puts("");
    }
}

void no2()
{
    int n[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};
    int m[4][2] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            m[j][i] = n[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", m[i][j]);

        puts("");
    }
}