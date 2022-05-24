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

    printf("Á÷»ç°¢Çü n ÀÇ ³ÐÀÌ : %d \n", GetRactArea(n));
    printf("Á÷»ç°¢Çü n ÀÇ ³× Á¡ÀÇ ÁÂÇ¥´Â ? \n");
    ShowRactAllPos(&n);

    return 0;
}

Ract GetRactPos()
{
    Ract n;

    printf("p1 ÀÇ x ÁÂÇ¥ ÀÔ·Â : ");
    scanf("%d", &n.p1.xpos);
    printf("p1 ÀÇ y ÁÂÇ¥ ÀÔ·Â : ");
    scanf("%d", &n.p1.ypos);
    printf("p2 ÀÇ x ÁÂÇ¥ ÀÔ·Â : ");
    scanf("%d", &n.p2.xpos);
    printf("p2 ÀÇ y ÁÂÇ¥ ÀÔ·Â : ");
    scanf("%d", &n.p2.ypos);

    return n;
}

int GetRactArea(Ract n)
{
    return (n.p2.xpos - n.p1.xpos) * (n.p2.ypos - n.p1.ypos);
}

void ShowRactAllPos(Ract *n)
{
    printf("1¹ø ÁÂÇ¥ x_%d , y_%d \n", n->p1.xpos, n->p1.ypos);
    printf("2¹ø ÁÂÇ¥ x_%d , y_%d \n", n->p2.xpos, n->p1.ypos);
    printf("3¹ø ÁÂÇ¥ x_%d , y_%d \n", n->p1.xpos, n->p2.ypos);
    printf("4¹ø ÁÂÇ¥ x_%d , y_%d \n", n->p2.xpos, n->p2.ypos);
}