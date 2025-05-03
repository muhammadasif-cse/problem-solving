#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf("*");
        }
        printf("\n");
        space++;
    }
    return 0;
}
