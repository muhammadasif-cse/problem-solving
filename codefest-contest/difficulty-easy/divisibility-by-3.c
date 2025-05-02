#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int digits[N];

    for (int i = 0; i < N; i++)
    {

        scanf("%1d", &digits[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += digits[i];
    }

    if (sum % 3 == 0) printf("YES");
    else printf("NO");

    return 0;
}
