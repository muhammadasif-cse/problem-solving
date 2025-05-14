#include <stdio.h>

int recursion_function(int n, int count)
{
    if (n + 1 == count)
    {
        return 0;
    }

    printf("%d\n", count);
    recursion_function(n, count += 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int numbers = recursion_function(n, 1);

    return 0;
}