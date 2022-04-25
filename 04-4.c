#include <stdio.h>

void no1();
void no2();

int main()
{
    no1();
    no2();

    return 0;
}

void no1()
{
    int n1 = 0;

    printf("수 입력 : ");
    scanf("%d", &n1);

    printf("부호 변화 : %d", ~n1 + 1);
}

void no2()
{
    int n1 = 3;
    int re1 = 0, re2 = 0;

    re1 = n1 << 3;
    printf("%d x 8 = %d \n", n1, re1);

    re2 = re1 >> 2;
    printf("%d / 4 = %d \n", re1, re2);
}