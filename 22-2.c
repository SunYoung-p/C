#include <stdio.h>

typedef struct employee
{
    char name[20];
    char number[20];
    int pay;
} Employee;

Employee init();

int main()
{
    Employee n[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d�� ���� ���� �Է� \n", i + 1);
        n[i] = init();
        puts("");
    }

    puts("");

    for (int i = 0; i < 3; i++)
    {
        printf("%d�� ���� ���� ��� \n", i + 1);
        printf("���� �̸� : %s\n���� �ֹε�Ϲ�ȣ : %s\n���� �޿� : %d\n", n[i].name, n[i].number, n[i].pay);
        puts("");
    }
}

Employee init()
{
    Employee n;

    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", n.name);

    printf("�ֹε�Ϲ�ȣ�� �Է��ϼ��� : ");
    scanf("%s", n.number);

    printf("�޿��� �Է��ϼ��� : ");
    scanf("%d", &n.pay);

    return n;
}
