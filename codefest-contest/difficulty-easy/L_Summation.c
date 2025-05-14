#include <stdio.h>

void recursion_summation(long long numbers[], int n, int count, long long sum)
{
    if (n == count)
    {
        printf("%lld", sum);

        return;
    }

    recursion_summation(numbers, n, count + 1, sum + numbers[count]);

};

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    recursion_summation(arr, n, 0, 0);
    return 0;
}