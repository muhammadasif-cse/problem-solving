#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int numbers[N];
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    int max_value = numbers[0];
    for (int i = 1; i < N; i++)
    {
        if (numbers[i] > max_value)
        {
            max_value = numbers[i];
        }
    }

    cout << max_value;

    return 0;
}