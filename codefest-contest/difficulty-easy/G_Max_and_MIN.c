#include <stdio.h>
#include <limits.h>

int min_max_num(int num[], int n)
{

    int min = INT_MAX, max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[0] != 0 )
        {
            if (num[i] < min)
            {
                min = num[i];
            }
            if (num[i] > max)
            {
                max = num[i];
            }
        }
        else
        {
            min = 0;
            max = 0;
        }
    }

    printf("%d %d", min, max);
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min_max_num(arr, n);

    return 0;
}