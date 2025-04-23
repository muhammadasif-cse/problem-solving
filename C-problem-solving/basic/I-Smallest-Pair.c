#include <limits.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int t = 0; t < n; t++)
    {
        int num;
        scanf("%d", &num);


        int values[num + 1];
        for (int i = 1; i <= num; i++)
        {
            scanf("%d", &values[i]);
        }

        int min = INT_MAX;

        for (int i = 1; i <= num; i++)
        {
            for (int j = i + 1; j <= num; j++)
            {
                // Ai + Aj + j - i
                // a1 + a2 + j - i = 20 + 1 + 2-1 = 22.

                const int cal = values[i] + values[j] + j - i;
                if (min > cal)
                {
                    min = cal;
                }
                // printf("a%d + a%d + %d - %d = %d + %d + %d - %d = %d\n", i, j, j, i, values[i], values[j], j, i, cal);
            }
        }

        printf("%d\n", min);
    }

    return 0;
}
