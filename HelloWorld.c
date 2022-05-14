#include <stdio.h>

void ShowAllStr(int, char [][20]);
int main()
{
    char n[3][20] = {"Hello", "My", "Name is park"};

    ShowAllStr(3, n);

    return 0;
}

void ShowAllStr(int len, char n[][20])
{
    for (int i = 0; i < len; i++)
        printf("%s \n", n[i]);
}