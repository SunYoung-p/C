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

void No3()
{
    for (int i = 0; i < 5; i++)
        printf("%d번째 난수 : %d (0이상 99이하) \n", i + 1, rand() % 100);
}

void No4()
{
    srand((int)time(NULL)); // 시드 입력

    printf("주사위 1의 결과 : %d \n", rand() % 6 + 1);
    printf("주사위 2의 결과 : %d \n", rand() % 6 + 1);
}

void No5()
{
    int n = 0, m = 0, o = 0, p = 0, re = 0;

    srand((int)time(NULL));

    do
    {
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &o);
        p = rand() % 3 + 1;

        printf("당신은 %s 선택, 컴퓨터는 %s 선택, ",
               o == 1 ? "바위" : o == 2 ? "가위"
                             : o == 3   ? "보"
                                        : "잘못 입력했습니다",
               p == 1 ? "바위" : p == 2 ? "가위"
                             : p == 3   ? "보"
                                        : "잘못된 값");

        if (o == p)
        {
            printf("비겼습니다! \n");
            m++;
        }
        else if ((o == 1 && p == 3) || (o == 2 && p == 1) || (o == 3 && p == 2))
        {
            printf("당신이 졌습니다! \n");
            re++;
        }
        else
        {
            printf("당신이 이겼습니다! \n");
            n++;
        }

    } while (re == 0);

    printf("\n게임의 결과 : %d승, %d무 \n", n, m);
}