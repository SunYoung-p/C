#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (((i * 10) + j) + ((j * 10) + i) == 99)
            {
                printf("%d %d \n", i, j);
                break;
            }
        }
    }

    return 0;
}

void no1()
{
    for (int i = 1; i < 10; i++)
    {
        if (i % 2)
            continue;

        for (int j = 1; j < 10; j++)
        {
            if (j > i)
                break;
            printf("%d x %d = %d \n", i, j, i * j);
        }

        puts("");
    }
}