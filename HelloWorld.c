#include <stdio.h>

int main()
{
    FILE *fp = fopen("data3.txt", "r");
    char m[20] = {0};

    while (fgets(m, sizeof(m) - 1, fp) != NULL)
        printf("%s", m);

    if (feof(fp) != 0)
        puts("���� ������ �� �о����ϴ� \n");
    else
        puts("������ ���� �� �����ϴ�. \n");

    return 0;
}