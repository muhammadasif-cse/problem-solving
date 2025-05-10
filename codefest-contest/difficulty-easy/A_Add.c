#include <stdio.h>

int summation(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int result = summation(x, y);

    printf("%d", result);

    return 0;
}