#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int X[N];


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    int X_th;
    scanf("%d", &X_th);

    X[X_th - 1] = X[X_th - 1] == 0 ? 1 : 0;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
