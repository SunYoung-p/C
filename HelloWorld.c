#include <stdio.h>

int main()
{
    int i = 0;
    float num = 0.0;

    for (i = 0; i < 100; i++)
        num += 0.1;

    printf("0.1 을 100번 더한 결과 : %f \n", num);

    return 1;
}