#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = star; 0 < j; j--)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}
