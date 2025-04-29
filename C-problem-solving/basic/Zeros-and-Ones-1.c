#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int EN[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &EN[i]);
    }

    int count0 = 0, count1 = 0;
    for (int i = 0; i < N; i++)
    {
        if (EN[i] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }

    printf("%d %d", count0, count1);

    return 0;
}
