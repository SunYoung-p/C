#include <stdio.h>

void no1();
void no2();
void no4();
void no5();

int main()
{

    return 0;
}

void no1()
{
    int px, py;
    int qx, qy;

    printf("�� ����� x, y ��ǥ : ");
    scanf("%d %d", &px, &py);

    printf("�� �ϴ��� x, y ��ǥ : ");
    scanf("%d %d", &qx, &qy);

    printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�. \n", (qx - px) * (qy - py));
}

void no2()
{
    double n1 = 0, n2 = 0;

    printf("�� �Ǽ��� �Է��ϼ��� ");
    scanf("%lf %lf", &n1, &n2);

    printf("������ ��� : %f \n", n1 + n2);
    printf("������ ��� : %f \n", n1 - n2);
    printf("������ ��� : %f \n", n1 * n2);
    printf("�������� ��� : %f \n", n1 / n2);
}

void no4()
{
    int n = 0;

    printf("���� �Է� �ϼ��� ");
    scanf("%d", &n);

    printf("%d ���� �ƽ�Ű�ڵ� ���ڷ� %c �Դϴ� \n", n, n);
}

void no5()
{
    char n = 0;

    printf("���� �Է� �ϼ��� ");
    scanf("%c", &n);

    printf("���� %c �� ������ %d �Դϴ� \n", n, n);
}