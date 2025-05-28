#include <bits/stdc++.h>

using namespace std;

int main()
{
    char X;

    cin >> X;
    if (int(X) >= 65 && int(X) <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (int(X) >= 48 && int(X) <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (int(X) >= 97 && int(X) <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    return 0;
}