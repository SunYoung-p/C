#include <stdio.h>

int main()
{
    int i = 1;
    long j = 1;
    short n1 = 5, n2 = 10;
    printf("int���� size : %d \n", sizeof(i));
    printf("long���� size : %d \n", sizeof(j));
    printf("short�� �ڷ��� �� ���� ���� ����� size�� ? %d \n", sizeof(n1 + n2)); // 4 ���
    return 0;
}