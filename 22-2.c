#include <stdio.h>

struct employee
{
    char name[20];
    char number[20];
    int pay;
};

struct employee init();

int main()
{
    struct employee n[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d번 직원 정보 입력 \n", i + 1);
        n[i] = init();
        puts("");
    }

    puts("");

    for (int i = 0; i < 3; i++)
    {
        printf("%d번 직원 정보 출력 \n", i + 1);
        printf("직원 이름 : %s\n직원 주민등록번호 : %s\n직원 급여 : %d\n", n[i].name, n[i].number, n[i].pay);
        puts("");
    }
}

struct employee init()
{
    struct employee n;

    printf("이름을 입력하세요 : ");
    scanf("%s", n.name);

    printf("주민등록번호를 입력하세요 : ");
    scanf("%s", n.number);

    printf("급여를 입력하세요 : ");
    scanf("%d", &n.pay);

    return n;
}
