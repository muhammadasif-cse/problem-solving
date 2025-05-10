#include <stdio.h>

int print(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            printf("%d", i);
        }
        else
            printf(" %d", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    print(n);

    return 0;
}