#include <stdio.h>

int main()
{
    int result;
    int num1, num2, num3;

    printf("�� ���� ���� �Է� : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 + num2 + num3;
    printf("%d + %d + %d = %d", num1, num2, num3, result);

    return 0;
}