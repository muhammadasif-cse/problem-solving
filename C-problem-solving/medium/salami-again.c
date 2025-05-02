#include <limits.h>
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int maxSalami = INT_MIN;

    int salami[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &salami[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (maxSalami < salami[i])
        {
            maxSalami = salami[i];
        }
    }


    for (int i = 0; i < N; i++)
    {
        int result = maxSalami - salami[i];
        printf("%d ", result);
    }


    return 0;
}
