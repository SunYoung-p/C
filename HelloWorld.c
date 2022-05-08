#include <stdio.h>

int GetFact(int n)
{
    if (n == 1)
        return 1;
    return n * GetFact(n - 1);
}

int main()
{
    int n = 0;

    printf("팩토리얼을 구할 수 입력 : ");
    scanf("%d", &n);

    printf("%d 의 팩토리얼 결과값 : %d \n", n, GetFact(n));

    return 0;
}