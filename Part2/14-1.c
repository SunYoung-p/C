#include <stdio.h>

void no1();
int no1_CallByValue(int n);
void no1_CallByRefer(int *n);
void no2_Swap3(int *, int *, int *);
int main()
{
    int n = 0, m = 0, o = 0;

    printf("순서를 바꿀 세 개의 수 입력 : ");
    scanf("%d %d %d", &n, &m, &o);

    no2_Swap3(&n, &m, &o);

    printf("순서 변경 후 : %d %d %d \n", n, m, o);

    return 0;
}

void no1()
{
    int n = 0;

    printf("제곱을 계산할 수는 ? ");
    scanf("%d", &n);

    printf("n의 값 : %d \n", n);
    printf("Call-by-value 로 제곱 계산 : %d,  현재 n의 값 : %d \n", no1_CallByValue(n), n);
    no1_CallByRefer(&n);
    printf("Call-by-value 로 제곱 계산 후 n의 값 : %d \n", n);
}

int no1_CallByValue(int n)
{
    return n * n;
}

void no1_CallByRefer(int *n)
{
    *n *= *n;
}

void no2_Swap3(int *n, int *m, int *o)
{
    int temp = 0;

    temp = *m;
    *m = *n;
    *n = *o;
    *o = temp;
}