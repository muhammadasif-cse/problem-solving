#include <stdio.h>

int recursion_function(int n, int count)
{
    if (0 == count)
    {
        return 0;
    }

    if (count != 1)
    {
        printf("%d ", count);
    }
    else
    {
        printf("%d", count);
    }
    recursion_function(n, count -= 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int numbers = recursion_function(n, n);

    return 0;
}