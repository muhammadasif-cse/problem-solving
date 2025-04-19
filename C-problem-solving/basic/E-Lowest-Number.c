#include <limits.h>
#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int A[N], min = INT_MAX, P = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] < min)
        {
            min = A[i];
            P = i;
        }
    }

    printf("%d %d", min, P + 1);
    return 0;
}
