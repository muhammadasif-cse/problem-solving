#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);


    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }


    for (int i = N - 1; 1 <= i; i--)
    {
        for (int s = i + 1; s <= N; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
