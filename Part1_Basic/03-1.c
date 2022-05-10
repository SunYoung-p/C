#include <stdio.h>
void no_1();
void no_2();
void no_3();
void no_4();
void no_5();

int main(void)
{
    // no_1();
    // no_2();
    // no_3();
    // no_4();
    no_5();

    return 0;
}

void no_1()
{
    int n1, n2;

    printf("1번 수 입력 : ");
    scanf("%d", &n1);
    printf("2번 수 입력 : ");
    scanf("%d", &n2);
    printf("두 수의 덧셈 : %d \n", n1 + n2);
    printf("두 수의 뺄셈 : %d \n", n1 - n2);
}

void no_2()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d x %d + %d = %d \n", n1, n2, n3, n1 * n2 + n3);
}

void no_3()
{
    int n1;

    scanf("%d", &n1);
    printf("%d 의 제곱의 결과 : %d \n", n1, n1 * n1);
}

void no_4()
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);
    printf("%d 와 %d 의 몫은 : %d \n", n1, n2, n1 / n2);
    printf("%d 와 %d 의 나머지는 : %d \n", n1, n2, n1 % n2);
}

void no_5()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    printf("(%d - %d) x (%d + %d) x (%d %% %d) = %d", n1, n2, n2, n3, n3, n1, (n1-n2)*(n2+n3)*(n3%n1));
}