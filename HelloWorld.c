#include <stdio.h>

int main()
{
    char n[7] = {0}, m[6] = {0};

    fputs("주민번호 앞 6자리 입력 : ", stdout);
    fgets(n, sizeof(n), stdin);

    fflush(stdin);

    fputs("이름 입력 : ", stdout);
    fgets(m, sizeof(m), stdin);

    printf("주민번호 : %s\n이름 : %s \n", n, m);
    return 0;
}