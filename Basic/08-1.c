#include <stdio.h>

void no1();
int main()
{
    int math = 0, en = 0, kr = 0;
    double avg = 0;

    printf("국어 점수는 ? ");
    scanf("%d", &kr);

    printf("수학 점수는 ? ");
    scanf("%d", &math);

    printf("영어 점수는 ? ");
    scanf("%d", &en);

    avg = (kr + math + en) / 3;
    printf("학점은 %c 입니다 \n", avg >= 90 ? 'A' : avg >= 80 ? 'B'
                                                : avg >= 70   ? 'C'
                                                : avg >= 60   ? 'D'
                                                : avg >= 50   ? 'E'
                                                              : 'F');

    return 0;
}

void no1()
{
    for (int i = 1; i < 100; i++)
    {
        if (i % 7 == 0 || i % 9 == 0)
            printf("%d \n", i);
    }
}

void no2()
{
    int n = 0, m = 0;

    printf("두 수 입력 : ");
    scanf("%d %d", &n, &m);

    if (n > m)
        printf("두 수의 차 : %d \n", n - m);
    else
        printf("두 수의 차 : %d \n", m - n);
}

void no3()
{
    int math = 0, en = 0, kr = 0;
    double avg = 0;

    printf("국어 점수는 ? ");
    scanf("%d", &kr);

    printf("수학 점수는 ? ");
    scanf("%d", &math);

    printf("영어 점수는 ? ");
    scanf("%d", &en);

    avg = (kr + math + en) / 3;

    if (avg >= 90)
        printf("학점은 A 입니다 \n");
    else if (avg >= 80)
        printf("학점은 B 입니다 \n");
    else if (avg >= 70)
        printf("학점은 C 입니다 \n");
    else if (avg >= 60)
        printf("학점은 D 입니다 \n");
    else if (avg >= 50)
        printf("학점은 E 입니다 \n");
    else
        printf("학점은 F 입니다 \n");
}