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

    for (int i = 0; i < N; i++)
    {
        if (0 < A[i])
        {
            cout << A[i] << " ";
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (0 == A[i])
        {
            cout << A[i] << " ";
        }
    }

    return 0;
}