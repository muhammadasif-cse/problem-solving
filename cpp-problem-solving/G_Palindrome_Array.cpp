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

    bool isPalindrome = true;

    int left = 0, right = N - 1;
    while (left < right)
    {
        if (A[left] != A[right])
        {
            isPalindrome = false;
        }

        left++;
        right--;
    }

    if (isPalindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}