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

    printf("좌 상단의 x, y 좌표 : ");
    scanf("%d %d", &px, &py);

    printf("우 하단의 x, y 좌표 : ");
    scanf("%d %d", &qx, &qy);

    printf("두 점이 이루는 직사각형의 넓이는 %d 입니다. \n", (qx - px) * (qy - py));
}

void no2()
{
    double n1 = 0, n2 = 0;

    printf("두 실수를 입력하세요 ");
    scanf("%lf %lf", &n1, &n2);

    printf("덧셈의 결과 : %f \n", n1 + n2);
    printf("뺄셈의 결과 : %f \n", n1 - n2);
    printf("곱셈의 결과 : %f \n", n1 * n2);
    printf("나눗셈의 결과 : %f \n", n1 / n2);
}

void no4()
{
    int n = 0;

    printf("정수 입력 하세요 ");
    scanf("%d", &n);

    printf("%d 값은 아스키코드 문자로 %c 입니다 \n", n, n);
}

void no5()
{
    char n = 0;

    printf("문자 입력 하세요 ");
    scanf("%c", &n);

    printf("문자 %c 는 정수로 %d 입니다 \n", n, n);
}