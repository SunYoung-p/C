#include <stdio.h>

struct employee
{
    char name[20];
    char number[20];
    int pay;
};

int main()
{
    struct employee n;

    printf("이름을 입력하세요 : ");
    fgets(n.name, sizeof(n.name), stdin);

    printf("주민등록번호를 입력하세요 : ");
    fgets(n.number, sizeof(n.number), stdin);

    printf("급여를 입력하세요 : ");
    scanf("%d", &n.pay);

    printf("직원 이름 : %s\n직원 주민등록번호 : %s\n직원 급여 : %d\n", n.name, n.number, n.pay);
    return 0;
}