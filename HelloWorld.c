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

    printf("���丮���� ���� �� �Է� : ");
    scanf("%d", &n);

    printf("%d �� ���丮�� ����� : %d \n", n, GetFact(n));

    return 0;
}