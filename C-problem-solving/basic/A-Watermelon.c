#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);
    int isPossible = 0;
    for (int i = 2; i <= w - 2; i += 2)
    {
        if (i % 2 == 0 && (w - i) % 2 == 0 && (w - i) > 0)
        {
            isPossible = 1;
            break;
        }
    }

    if (isPossible)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
