#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *, Point *);

int main()
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    printf("pos1-x : %d pos1-y : %d \n", pos1.xpos, pos1.ypos);
    printf("pos2-x : %d pos2-y : %d \n", pos2.xpos, pos2.ypos);
    SwapPoint(&pos1, &pos2);
    puts("After Swap");
    printf("pos1-x : %d pos1-y : %d \n", pos1.xpos, pos1.ypos);
    printf("pos2-x : %d pos2-y : %d \n", pos2.xpos, pos2.ypos);

    return 0;
}

void SwapPoint(Point *n, Point *m)
{
    Point swap;

    swap = *n;
    *n = *m;
    *m = swap;

    return;
}