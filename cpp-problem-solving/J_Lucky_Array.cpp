#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    int freq = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == min)
            freq++;
    }

    if (freq % 2 == 1)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}