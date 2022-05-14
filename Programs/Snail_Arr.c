#include <stdio.h>

int main()
{
    int n = 0, m = 1;
    int o[100][100] = {0};
    printf("숫자를 입력하시오 : ");
    scanf("%d", &n);

    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int j = i; j < n - 1 - i; j++)
        {
            o[i][j] = m++;
        }

        for (int j = i; j < n - 1 - i; j++)
        {
            o[j][n - 1 - i] = m++;
        }

        for (int j = i; j < n - 1 - i; j++)
        {
            o[n - 1 - i][n - 1 - j] = m++;
        }

        for (int j = i; j < n - 1 - i; j++)
        {
            o[n - 1 - j][0 + i] = m++;
        }
    }

    if (n % 2) // 만약 홀수면,  달팽이 배열의 정 가운데를 채워준다.
        o[n / 2][n / 2] = m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", o[i][j]);
        }
        puts("");
    }

    return 0;
}