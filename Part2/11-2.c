#include <stdio.h>

void no1();
void no2();
int main()
{
    char c[100] = {0};
    char max = 0, cnt = 0;

    printf("�� �ܾ �Է��ϼ��� : ");
    scanf("%s", c);

    while (c[cnt] != 0)
    {
        if (c[cnt] > max)
            max = c[cnt];
        
        cnt++;
    }

    printf("�Է��� �� �ܾ� %s �߿��� �ƽ�Ű �ڵ尪�� ���� ū ���ڴ� : %c \n", c, max);

    return 0;
}

void no1()
{
    char c[100] = {0};
    int cnt = 0;

    printf("�� �ܾ �Է��ϼ��� : ");
    scanf("%s", c);

    while (c[cnt] != 0)
        cnt++;

    printf("�Է��� ���ܾ� %s �� ������ %d �Դϴ� \n", c, cnt);
}

void no2()
{
    char c[100] = {0};
    char temp = 0;
    int cnt = 0;

    printf("�� �ܾ �Է��ϼ��� : ");
    scanf("%s", c);

    while (c[cnt] != 0)
        cnt++;

    for (int i = 0; i < cnt / 2; i++)
    {
        temp = c[cnt - 1 - i];
        c[cnt - 1 - i] = c[i];
        c[i] = temp;
    }

    printf("�Է��� �� �ܾ��� ������ %s �Դϴ� \n", c);
}