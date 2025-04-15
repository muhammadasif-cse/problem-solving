#include <stdio.h>

int main()
{
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    if (A + B - C == D || A + B * C == D || A - B + C == D || A - B * C == D || A * B + C == D || A * B - C == D)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
