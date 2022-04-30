
// We need Math.  Because I can make below code due to calcualtion ax+y = b  ax2+y2 = c  (multi x/y)
#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf("o ");

        for (int j = 0; j < 2 * i + 1; j++)
            printf("@ ");

        for (int j = 0; j < n - i - 1; j++)
            printf("o ");

        puts("");
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
            printf("o ");

        for (int j = 0; j < (i * -2) + 7; j++)
            printf("@ ");

        for (int j = 0; j < i + 1; j++)
            printf("o ");

        puts("");
    }

    return 0;
}