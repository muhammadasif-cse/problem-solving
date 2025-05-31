#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100005];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int *it = lower_bound(arr, arr + n, x);
        int idx = it - arr;
        if (it != arr + n && *it == x)
        {
            cout << "Yes " << idx + 1 << endl;
        }
        else
        {
            cout << "No " << idx + 1 << endl;
        }
    }
    return 0;
}