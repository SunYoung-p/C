#include <stdio.h>

int main()
{
    int n = 0;

    while (1)
    {
        printf("���ĺ� �Է� : ");
        n = getchar();

        fflush(stdin); // enter �� �Ұ�

        if (n == EOF)
            break;
        else if (n >= 'a' && n <= 'z')
            putchar(n - 32);
        else if (n >= 'A' && n <= 'Z')
            putchar(n + 32);
        else
            puts("���ĺ��� �Է����ּ��� ");

        puts("");
    }

    return 0;
}