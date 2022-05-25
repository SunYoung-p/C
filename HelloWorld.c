#include <stdio.h>

enum
{
    R,
    G,
    B
};
typedef enum dosol
{
    Do = 1,
    Re = 2,
    Mi = 3
} Dosol;

int main()
{
    Dosol n;

    for (n = Do; n <= Mi; n++)
        printf("%d\n", n);

    printf("R : %d \n", R);
    printf("G : %d \n", G);
    printf("B : %d \n", B);
}