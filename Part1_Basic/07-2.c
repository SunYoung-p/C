#include <stdio.h>
void no1();
void no2();
int main()
{
    no2();

    return 0;
}

void no1()
{
    int n = 0, i = 0, sum = 0;

    printf("입력할 수의 개수는 ? ");
    scanf("%d", &n);

    while (n > 0)
    {
        while (i < 1)
        {
            printf("1 이상의 수를 입력하세요 : ");
            scanf("%d", &i);
        }
        n--;
        sum += i;
        i = 0; // while 문 진입을 위한 초기화
    }
    printf("입력한 수의 합계 : %d \n", sum);
}

void no2()
{
    int n = 5, i = 0, j = 0;

    while (i < 5)
    {
        while (j < i)
        {
            printf("o ");
            j++;
        }
        printf("* \n");
        i++;
        j = 0; // while 문 진입을 위한 초기화
    }
}