#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void no1();
void no2();

int main()
{
    // ref. atoi(str[idx]) 같이 구문을 써서,  idx 이후의 모든 문자열을 atoi에 넣어주면 n_val은 필요없는 변수이다.
    //      또한 strncmp 함수로 특정 길이까지만 문자열을 비교하게 한다면, o 와 p 도 필요없는 변수이다.
    //      스페이스 의 위치를 구하는 함수, 나이 비교하는 함수, 이름 비교하는 함수 이렇게 나눠서 구현하면 훨씬 편하다.
    char n[100] = {0}, m[100] = {0}, o[100] = {0}, p[100] = {0}, n_val[100] = {0}, m_val[100] = {0};
    int cnt = 1, re = 0, idx = 0, n_age = 0, m_age = 0;

    fputs("첫 번째 사람의 정보 입력 : ", stdout);
    fgets(n, sizeof(n), stdin);

    fputs("두 번째 사람의 정보 입력 : ", stdout);
    fgets(m, sizeof(m), stdin);

    while (n[cnt++] != ' ') // 스페이스바의 위치를 확인한다
        ;

    strncpy(o, n, cnt); // 스페이스바 기준으로 앞 문자열을 빼낸다.

    while (1) // 스페이스바 뒤 문자열을  빼낸다.
    {
        n_val[idx] = n[cnt];
        idx++;
        if (n[cnt] == 0)
            break;
        cnt++;
    }

    idx = cnt = 0;

    while (m[cnt++] != ' ') // 동일 작업
        ;

    strncpy(p, m, cnt);

    while (1)
    {
        m_val[idx] = m[cnt];
        idx++;
        if (m[cnt] == 0)
            break;
        cnt++;
    }

    re = strcmp(o, p);
    printf("%s와 %s는 %s \n", o, p, re == 0 ? "같은 이름 입니다" : re > 0 ? "첫 번째 이름이 더 값이 큽니다."
                                                                          : "두 번째 이름이 더 값이 큽니다.");
    n_age = atoi(n_val);
    m_age = atoi(m_val);

    if (n_age > m_age)
        printf("%s와 %s 중에서, %s 가 더 나이가 많습니다. \n", o, p, o);
    else if (m_age > n_age)
        printf("%s와 %s 중에서, %s 가 더 나이가 많습니다. \n", o, p, p);
    else
        printf("두 사람의 나이는 동일합니다 \n");

    return 0;
}

void no1()
{
    char n[100] = {0}, o[2] = {0, '\n'};
    int m = 0, sum = 0, cnt = 1;

    fputs("숫자가 포함된 문자열을 입력하세요 : ", stdout);
    fgets(n, sizeof(n) - 1, stdin);

    o[0] = n[0];
    while (o[0] != '\n')
    {
        m = atoi(o);
        if (m != 0) // atoi 하기 전에, o[0] >= '1' 같이 문자 1개를 기준으로 비교 연산하는 방법도 있다.
            sum += m;
        o[0] = n[cnt++];
    }

    printf("문자열에 포함된 숫자의 총 합 : %d \n", sum);
}

void no2()
{
    char str1[20], str2[20], str3[40];

    fputs("첫 번째 문자열 입력 : ", stdout);
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 1;
    printf("str1의 길이 : %d,  str1의 값  : %s \n", strlen(str1), str1);

    fputs("두 번째 문자열 입력 : ", stdout);
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 1;
    printf("str2의 길이 : %d,  str2의 값  : %s \n", strlen(str2), str2);

    strncpy(str3, str1, strlen(str1) - 1);
    printf("str3의 길이 : %d,  str3의 값  : %s \n", strlen(str3), str3);
    strncat(str3, str2, strlen(str2) - 1);
    printf("str3의 길이 : %d,  str3의 값  : %s \n", strlen(str3), str3);
}