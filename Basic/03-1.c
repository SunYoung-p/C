#include <stdio.h>
void no_1();
void no_2();
void no_3();
void no_4();
void no_5();

int main(void)
{
    // no_1();
    // no_2();
    // no_3();
    // no_4();
    no_5();

    return 0;
}

void no_1()
{
    int n1, n2;

    printf("1�� �� �Է� : ");
    scanf("%d", &n1);
    printf("2�� �� �Է� : ");
    scanf("%d", &n2);
    printf("�� ���� ���� : %d \n", n1 + n2);
    printf("�� ���� ���� : %d \n", n1 - n2);
}

void no_2()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d x %d + %d = %d \n", n1, n2, n3, n1 * n2 + n3);
}

void no_3()
{
    int n1;

    scanf("%d", &n1);
    printf("%d �� ������ ��� : %d \n", n1, n1 * n1);
}

void no_4()
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);
    printf("%d �� %d �� ���� : %d \n", n1, n2, n1 / n2);
    printf("%d �� %d �� �������� : %d \n", n1, n2, n1 % n2);
}

void no_5()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    printf("(%d - %d) x (%d + %d) x (%d %% %d) = %d", n1, n2, n2, n3, n3, n1, (n1-n2)*(n2+n3)*(n3%n1));
}