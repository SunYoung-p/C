#include <stdio.h>

void no1();
void no2();
void no3();
void no4();

int main()
{
    int n = 0, cnt = 0;
    double m = 0, sum = 0;

    printf("몇 개의 수를 입력할 건지 ? ");
    scanf("%d", &n);

    cnt = n;
    while (n > 0)
    {
        printf("수 입력 : ");
        scanf("%lf", &m);
        sum += m;
        n--;
    }

    printf("모든 입력 값의 평균 : %f", sum / cnt);

    return 0;
}

void no1()
{
    int n = 0;

    printf("Hello World 몇 번 반복 ? ");
    scanf("%d", &n);

    while (n)
    {
        printf("Hello World ! \n");
        n--;
    }
}

void no2()
{
    int n = 0, i = 1;

    printf("3의 배수 몇 번 출력 ? ");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("%d ", 3 * i);
        n--;
        i++;
    }
}

void no3()
{
    int sum = 0, n = 1;

    while (n != 0)
    {
        printf("더하고 싶은 수 입력 (0 입력 시 종료) : ");
        scanf("%d", &n);
        sum += n;
    }

    printf("모든 수의 합 : %d \n", sum);
}

void no4()
{
    int n = 0, i = 9;

    printf("어떤 구구단을 출력하지? ");
    scanf("%d", &n);

    while (n > 0 && i > 0)
    {
        printf("%d x %d = %d \n", n, i, n * i);
        i--;
    }
}