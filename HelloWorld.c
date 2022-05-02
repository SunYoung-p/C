#include <stdio.h>

int Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}
int main()
{
    printf("4! = %d \n", Factorial(4));

    return 0;
}