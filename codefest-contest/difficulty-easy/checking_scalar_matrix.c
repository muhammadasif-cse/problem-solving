//! Take input a matrix and check if it’s a scalar matrix or not.
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

    //* check is matrix
    bool is_matrix = true;
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
        }
    }

    //* scaler matrix
    int temp_matrix = 0;
    int next_matrix = 1;

    bool is_scalar_matrix = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //* check is scalar matrix
            if (i == j)
            {
                temp_matrix = arr[i][j];
                if (n > next_matrix)
                {
                    if (arr[next_matrix][next_matrix] != temp_matrix)
                    {
                        is_scalar_matrix = false;
                    }
                }
            }
        }
        next_matrix++;
    }

    //* print is scaler matrix
    if (is_matrix && is_scalar_matrix)
    {
        printf("Scalar Matrix");
    }
    else
    {
        printf("Not a Scalar Matrix");
    }

    return 0;
}