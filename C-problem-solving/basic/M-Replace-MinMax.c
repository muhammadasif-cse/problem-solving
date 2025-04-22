#include <limits.h>
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int min = INT_MAX, max = INT_MIN, minPosition = 0, maxPosition = 0;

    int arr[N];


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (min > arr[i])
        {
            min = arr[i];
            minPosition = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            maxPosition = i;
        }
    }

    const int temp = arr[minPosition];
    arr[minPosition] = arr[maxPosition];
    arr[maxPosition] = temp;


    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
