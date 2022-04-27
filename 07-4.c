#include <stdio.h>
void no1();

int main()
{

    return 0;
}

void no1()
{
    int n = 0, m = 0, sum = 0;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &n, &m);

    for (; n <= m; n++)
        sum += n;

    printf("두 수 사이 값의 합계 : %d \n", sum);
}