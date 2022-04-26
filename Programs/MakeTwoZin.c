#include <stdio.h>

int TwoZin(int a);

int main()
{
    int a = 42;

    TwoZin(a);

    return 0;
}

int TwoZin(int a)
{
    if (a / 2)
        TwoZin(a / 2);

    printf("%d", (char)(a % 2)); // 101010 prints.  // 22-04-27
}