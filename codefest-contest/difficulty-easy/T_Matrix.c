#include <stdio.h>

int main()
{
    int matrix;
    scanf("%d", &matrix);

    int arr[matrix][matrix];

    for (int i = 0; i < matrix; i++)
    {
        for (int j = 0; j < matrix; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int primary_matrix_sum = 0;

    //* primary matrix
    for (int i = 0; i < matrix; i++)
    {
        for (int j = 0; j < matrix; j++)
        {
            if (i == j)
            {
                primary_matrix_sum += arr[i][j];
            }
        }
    }

    int secondary_matrix_sum = 0;

    //* secondary matrix
    for (int i = 0; i < matrix; i++)
    {
        for (int j = 0; j < matrix; j++)
        {
            if (i + j == matrix - 1)
            {
                secondary_matrix_sum += arr[i][j];
            }
        }
    }

    //* primary and secondary matrix sum

    int result = primary_matrix_sum - secondary_matrix_sum;

    printf("%d", abs(result));


    return 0;
}