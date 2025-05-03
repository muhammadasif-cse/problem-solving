#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = space; 0 < j; j--)
        {
            printf("*");
        }
        printf("\n");
        space--;
    }
    return 0;
}
