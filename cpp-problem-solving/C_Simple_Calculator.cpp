#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long X, Y;

    cin >> X >> Y;

    long long summation = X + Y;
    long long multiplication = X * Y;
    long long subtraction = X - Y;

    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;
    return 0;
}