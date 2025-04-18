#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    long long int R, O = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%lld", &R);
        O += R;
    }
    printf("%lld", llabs(O));
    return 0;
}
