#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point p1;
    Point p2;
} Ract;

Ract GetRactPos();
int GetRactArea(Ract);
void ShowRactAllPos(Ract *);

int main()
{
    Ract n = GetRactPos();

    printf("���簢�� n �� ���� : %d \n", GetRactArea(n));
    printf("���簢�� n �� �� ���� ��ǥ�� ? \n");
    ShowRactAllPos(&n);

    return 0;
}

Ract GetRactPos()
{
    Ract n;

    printf("p1 �� x ��ǥ �Է� : ");
    scanf("%d", &n.p1.xpos);
    printf("p1 �� y ��ǥ �Է� : ");
    scanf("%d", &n.p1.ypos);
    printf("p2 �� x ��ǥ �Է� : ");
    scanf("%d", &n.p2.xpos);
    printf("p2 �� y ��ǥ �Է� : ");
    scanf("%d", &n.p2.ypos);

    return n;
}

int GetRactArea(Ract n)
{
    return (n.p2.xpos - n.p1.xpos) * (n.p2.ypos - n.p1.ypos);
}

void ShowRactAllPos(Ract *n)
{
    printf("1�� ��ǥ x_%d , y_%d \n", n->p1.xpos, n->p1.ypos);
    printf("2�� ��ǥ x_%d , y_%d \n", n->p2.xpos, n->p1.ypos);
    printf("3�� ��ǥ x_%d , y_%d \n", n->p1.xpos, n->p2.ypos);
    printf("4�� ��ǥ x_%d , y_%d \n", n->p2.xpos, n->p2.ypos);
}