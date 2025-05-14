#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp = 0, last = n - 1;

    while (temp <= last)
    {
        if (temp == last)
        {
            printf("%d", arr[temp]);
        }
        else
        {
            printf("%d %d ", arr[temp], arr[last]);
        }

        temp++;
        last--;
    }

    return 0;
}