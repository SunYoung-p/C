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

    fputs("#이름 : 박선용\n", fp);
    fputs("#주민번호: 0000-0000\n", fp);
    fputs("#전화번호 : 000-000-0000\n", fp);
}

void no2()
{
    FILE *fp = fopen("mystory.txt", "a");

    fputs("#즐겨먹는 음식 : 삼겹살\n", fp);
    fputs("#취미: 큐브\n", fp);
}