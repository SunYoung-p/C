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

    printf("�̸��� �Է��ϼ��� : ");
    fgets(n.name, sizeof(n.name), stdin);

    printf("�ֹε�Ϲ�ȣ�� �Է��ϼ��� : ");
    fgets(n.number, sizeof(n.number), stdin);

    printf("�޿��� �Է��ϼ��� : ");
    scanf("%d", &n.pay);

    printf("���� �̸� : %s\n���� �ֹε�Ϲ�ȣ : %s\n���� �޿� : %d\n", n.name, n.number, n.pay);
    return 0;
}