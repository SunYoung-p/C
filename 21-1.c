#include <stdio.h>

int main()
{
    int n = 0;

    while (1)
    {
        printf("알파벳 입력 : ");
        n = getchar();

        fflush(stdin); // enter 의 소거

        if (n == EOF)
            break;
        else if (n >= 'a' && n <= 'z')
            putchar(n - 32);
        else if (n >= 'A' && n <= 'Z')
            putchar(n + 32);
        else
            puts("알파벳을 입력해주세요 ");

        puts("");
    }

    return 0;
}