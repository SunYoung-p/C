#include <stdio.h>

void no1();
int main()
{
    int math = 0, en = 0, kr = 0;
    double avg = 0;

    printf("���� ������ ? ");
    scanf("%d", &kr);

    printf("���� ������ ? ");
    scanf("%d", &math);

    printf("���� ������ ? ");
    scanf("%d", &en);

    avg = (kr + math + en) / 3;
    printf("������ %c �Դϴ� \n", avg >= 90 ? 'A' : avg >= 80 ? 'B'
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

    printf("�� �� �Է� : ");
    scanf("%d %d", &n, &m);

    if (n > m)
        printf("�� ���� �� : %d \n", n - m);
    else
        printf("�� ���� �� : %d \n", m - n);
}

void no3()
{
    int math = 0, en = 0, kr = 0;
    double avg = 0;

    printf("���� ������ ? ");
    scanf("%d", &kr);

    printf("���� ������ ? ");
    scanf("%d", &math);

    printf("���� ������ ? ");
    scanf("%d", &en);

    avg = (kr + math + en) / 3;

    if (avg >= 90)
        printf("������ A �Դϴ� \n");
    else if (avg >= 80)
        printf("������ B �Դϴ� \n");
    else if (avg >= 70)
        printf("������ C �Դϴ� \n");
    else if (avg >= 60)
        printf("������ D �Դϴ� \n");
    else if (avg >= 50)
        printf("������ E �Դϴ� \n");
    else
        printf("������ F �Դϴ� \n");
}