#include <stdio.h>

int main()
{
    int i = 0;
    float num = 0.0;

    for (i = 0; i < 100; i++)
        num += 0.1;

    printf("0.1 �� 100�� ���� ��� : %f \n", num);

    return 1;
}