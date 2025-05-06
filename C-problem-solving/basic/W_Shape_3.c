#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1, reverse_space = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    for (int r = star - 2; 1 <= r; r -= 2)
    {
        for (int j = 1; j <= reverse_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= r; j++)
        {
            printf("*");
        }
        printf("\n");
        reverse_space++;
    }

    return 0;
}