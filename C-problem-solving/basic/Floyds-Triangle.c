#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int floyd = 1;
    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= floyd; j++)
        {
            printf("%d", num++);
        }
        printf("\n");
        floyd++;
    }
    return 0;
}
