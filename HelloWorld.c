#include <stdio.h>

int main()
{
    char n[7] = {0}, m[6] = {0};

    fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
    fgets(n, sizeof(n), stdin);

    fflush(stdin);

    fputs("�̸� �Է� : ", stdout);
    fgets(m, sizeof(m), stdin);

    printf("�ֹι�ȣ : %s\n�̸� : %s \n", n, m);
    return 0;
}