#include <stdio.h>

int main()
{
    FILE *fp = fopen("data3.txt", "r");
    char m[20] = {0};

    while (fgets(m, sizeof(m) - 1, fp) != NULL)
        printf("%s", m);

    if (feof(fp) != 0)
        puts("파일 끝까지 잘 읽었습니다 \n");
    else
        puts("문제가 생긴 것 같습니다. \n");

    return 0;
}