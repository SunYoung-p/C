#include <stdio.h>
#include <stdlib.h>

void no1();

int main()
{

    return 0;
}

void no1()
{
    char n[100] = {0}, o[2] = {0, '\n'};
    int m = 0, sum = 0, cnt = 1;

    fputs("���ڰ� ���Ե� ���ڿ��� �Է��ϼ��� : ", stdout);
    fgets(n, sizeof(n) - 1, stdin);

    o[0] = n[0];
    while (o[0] != '\n')
    {
        m = atoi(o);
        if (m != 0)
            sum += m;
        o[0] = n[cnt++];
    }

    printf("���ڿ��� ���Ե� ������ �� �� : %d \n", sum);
}