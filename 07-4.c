#include <stdio.h>
void no1();

int main()
{

    return 0;
}

void no1()
{
    int n = 0, m = 0, sum = 0;
    printf("�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &n, &m);

    for (; n <= m; n++)
        sum += n;

    printf("�� �� ���� ���� �հ� : %d \n", sum);
}