#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < 10; o++)
        {
            for (int j = 0; j < n - 1 - i; j++)
                printf(" ");
            for (int j = 0; j <= i; j++)
                printf("*");
            for (int j = 0; j <= i - 1; j++)
                printf("*");
            for (int j = 0; j < n - 1 - i; j++)
                printf(" ");
        }

        puts("");
    }

    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < 10; o++)
        {
            for (int j = 0; j <= i; j++)
                printf(" ");
            for (int j = 0; j < n - 1 - i; j++)
                printf("*");
            for (int j = 0; j < n - 2 - i; j++)
                printf("*");
            for (int j = 0; j <= i; j++)
                printf(" ");
        }

        puts("");
    }

    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < 10; o++)
        {
            for (int j = 0; j < n - 1 - i; j++)
                printf("*");
            for (int j = 0; j <= i; j++)
                printf(" ");
            for (int j = 0; j <= i - 1; j++)
                printf(" ");
            for (int j = 0; j < n - 1 - i; j++)
                printf("*");
        }

        puts("");
    }

    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < 10; o++)
        {
            for (int j = 0; j <= i; j++)
                printf("*");
            for (int j = 0; j < n - 1 - i; j++)
                printf(" ");
            for (int j = 0; j < n - 2 - i; j++)
                printf(" ");
            for (int j = 0; j <= i; j++)
                printf("*");
        }

        puts("");
    }

    return 0;
}