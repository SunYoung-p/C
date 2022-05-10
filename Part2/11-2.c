#include <stdio.h>

void no1();
void no2();
int main()
{
    char c[100] = {0};
    char max = 0, cnt = 0;

    printf("영 단어를 입력하세요 : ");
    scanf("%s", c);

    while (c[cnt] != 0)
    {
        if (c[cnt] > max)
            max = c[cnt];
        
        cnt++;
    }

    printf("입력한 영 단어 %s 중에서 아스키 코드값이 가장 큰 문자는 : %c \n", c, max);

    return 0;
}

void no1()
{
    char c[100] = {0};
    int cnt = 0;

    printf("영 단어를 입력하세요 : ");
    scanf("%s", c);

    while (c[cnt] != 0)
        cnt++;

    printf("입력한 영단어 %s 의 개수는 %d 입니다 \n", c, cnt);
}

void no2()
{
    char c[100] = {0};
    char temp = 0;
    int cnt = 0;

    printf("영 단어를 입력하세요 : ");
    scanf("%s", c);

    while (c[cnt] != 0)
        cnt++;

    for (int i = 0; i < cnt / 2; i++)
    {
        temp = c[cnt - 1 - i];
        c[cnt - 1 - i] = c[i];
        c[i] = temp;
    }

    printf("입력한 영 단어의 역순은 %s 입니다 \n", c);
}