#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void no1();
void no2();

int main()
{
    // ref. atoi(str[idx]) ���� ������ �Ἥ,  idx ������ ��� ���ڿ��� atoi�� �־��ָ� n_val�� �ʿ���� �����̴�.
    //      ���� strncmp �Լ��� Ư�� ���̱����� ���ڿ��� ���ϰ� �Ѵٸ�, o �� p �� �ʿ���� �����̴�.
    //      �����̽� �� ��ġ�� ���ϴ� �Լ�, ���� ���ϴ� �Լ�, �̸� ���ϴ� �Լ� �̷��� ������ �����ϸ� �ξ� ���ϴ�.
    char n[100] = {0}, m[100] = {0}, o[100] = {0}, p[100] = {0}, n_val[100] = {0}, m_val[100] = {0};
    int cnt = 1, re = 0, idx = 0, n_age = 0, m_age = 0;

    fputs("ù ��° ����� ���� �Է� : ", stdout);
    fgets(n, sizeof(n), stdin);

    fputs("�� ��° ����� ���� �Է� : ", stdout);
    fgets(m, sizeof(m), stdin);

    while (n[cnt++] != ' ') // �����̽����� ��ġ�� Ȯ���Ѵ�
        ;

    strncpy(o, n, cnt); // �����̽��� �������� �� ���ڿ��� ������.

    while (1) // �����̽��� �� ���ڿ���  ������.
    {
        n_val[idx] = n[cnt];
        idx++;
        if (n[cnt] == 0)
            break;
        cnt++;
    }

    idx = cnt = 0;

    while (m[cnt++] != ' ') // ���� �۾�
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
    printf("%s�� %s�� %s \n", o, p, re == 0 ? "���� �̸� �Դϴ�" : re > 0 ? "ù ��° �̸��� �� ���� Ů�ϴ�."
                                                                          : "�� ��° �̸��� �� ���� Ů�ϴ�.");
    n_age = atoi(n_val);
    m_age = atoi(m_val);

    if (n_age > m_age)
        printf("%s�� %s �߿���, %s �� �� ���̰� �����ϴ�. \n", o, p, o);
    else if (m_age > n_age)
        printf("%s�� %s �߿���, %s �� �� ���̰� �����ϴ�. \n", o, p, p);
    else
        printf("�� ����� ���̴� �����մϴ� \n");

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
        if (m != 0) // atoi �ϱ� ����, o[0] >= '1' ���� ���� 1���� �������� �� �����ϴ� ����� �ִ�.
            sum += m;
        o[0] = n[cnt++];
    }

    printf("���ڿ��� ���Ե� ������ �� �� : %d \n", sum);
}

void no2()
{
    char str1[20], str2[20], str3[40];

    fputs("ù ��° ���ڿ� �Է� : ", stdout);
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 1;
    printf("str1�� ���� : %d,  str1�� ��  : %s \n", strlen(str1), str1);

    fputs("�� ��° ���ڿ� �Է� : ", stdout);
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 1;
    printf("str2�� ���� : %d,  str2�� ��  : %s \n", strlen(str2), str2);

    strncpy(str3, str1, strlen(str1) - 1);
    printf("str3�� ���� : %d,  str3�� ��  : %s \n", strlen(str3), str3);
    strncat(str3, str2, strlen(str2) - 1);
    printf("str3�� ���� : %d,  str3�� ��  : %s \n", strlen(str3), str3);
}