#include <stdio.h>

int main()
{
    int i = 1;
    long j = 1;
    short n1 = 5, n2 = 10;
    printf("int형의 size : %d \n", sizeof(i));
    printf("long형의 size : %d \n", sizeof(j));
    printf("short형 자료형 두 개의 연산 결과의 size는 ? %d \n", sizeof(n1 + n2)); // 4 출력
    return 0;
}