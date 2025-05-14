#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    //* input matrix numbers
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //* check is matrix & unit matrix
    bool is_matrix = true;
    bool is_unit_matrix = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i][j] != 0)
                {
                    is_matrix = false;
                }
            }
            else
            {
                if (arr[i][j] != 1)
                {
                    is_unit_matrix = false;
                }
            }
        }
    }

    if (is_matrix && is_unit_matrix)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not a Unit Matrix");
    }

    return 0;
}