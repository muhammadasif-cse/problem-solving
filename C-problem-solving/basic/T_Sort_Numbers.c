#include <stdio.h>

int sortNum(int a, int b, int c)
{
    int arr[3] = {a, b, c};

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d\n%d\n%d\n\n", arr[0], arr[1], arr[2]);
    printf("%d\n%d\n%d", a, b, c);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sortNum(a, b, c);
    return 0;
}