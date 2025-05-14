#include <stdio.h>
#include <stdbool.h>

int main()
{
    //* input 2 value for take number count
    int n, m;
    scanf("%d %d", &n, &m);

    //* declare 2d array for take numbers
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //* take input value for matching
    int x;
    scanf("%d", &x);

    //* checking numbers if exists
    bool is_take_num = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                is_take_num = false;
            }
        }
    }

    if (is_take_num)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}