#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X;

    cin >> X;

    int A[X];
    for (int i = 0; i < X; i++)
    {
        cin >> A[i];
    }

    for (int i = X - 1; i >= 0; i--)
    {
        cout << " " << A[i];
    }

    return 0;
}