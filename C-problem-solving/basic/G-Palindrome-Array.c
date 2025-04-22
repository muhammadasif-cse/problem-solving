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

    int l = 0, r = n - 1, p = 1;

    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        if (arr[l] != arr[r])
        {
            p = 0;
            break;
        }
        l++;
        r--;
    }

    if (p)
        printf("YES");
    else
        printf("NO");

    return 0;
}
