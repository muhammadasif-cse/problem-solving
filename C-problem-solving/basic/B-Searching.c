#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    long long int X, A[N];


    for (int i = 0; i < N; i++) scanf("%lld", &A[i]);
    scanf("%lld", &X);


    for (int i = 0; i < N; i++)
    {
        if (X == A[i])
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
