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

    int fv = 0, lv = n - 1;

    while (fv < lv)
    {
        int tv = arr[fv];
        arr[fv] = arr[lv];
        arr[lv] = tv;

        fv++;
        lv--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
