#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int repeat = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= repeat; j++)
        {
            printf("%d", i);
        }
        printf("\n");
        repeat++;
    }
    return 0;
}
