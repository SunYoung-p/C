#include <stdio.h>

void no1();
void no2();

int main()
{
    FILE *fp = fopen("mystory.txt", "r");
    char str[100] = {0};
    while (fgets(str, sizeof(str), fp) != NULL)
        printf("%s", str);

    return 0;
}

void no1()
{
    FILE *fp = fopen("mystory.txt", "w");

    fputs("#�̸� : �ڼ���\n", fp);
    fputs("#�ֹι�ȣ: 0000-0000\n", fp);
    fputs("#��ȭ��ȣ : 000-000-0000\n", fp);
}

void no2()
{
    FILE *fp = fopen("mystory.txt", "a");

    fputs("#��ܸԴ� ���� : ����\n", fp);
    fputs("#���: ť��\n", fp);
}