#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    (*ptr1) += 10;
    (*ptr2) -= 10;

    ptr1 = &num2;
    ptr2 = &num1;

    printf("num1의 값 : %d \nnum2 의 값 : %d \n", *ptr2, *ptr1);

    return 0;
}