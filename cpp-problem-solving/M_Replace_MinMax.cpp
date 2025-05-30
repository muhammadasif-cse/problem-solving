#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int min_idx = 0, max_idx = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < A[min_idx])
        {
            min_idx = i;
        }
        if (A[i] > A[max_idx])
        {
            max_idx = i;
        }
    }

    swap(A[min_idx], A[max_idx]);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}