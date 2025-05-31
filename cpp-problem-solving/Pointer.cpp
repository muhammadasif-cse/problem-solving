#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    int *pa = &a, *pb = &b;

    cin >> *pa >> *pb;

    cout << (*pa + *pb) << endl
         << abs(*pa - *pb) << endl;
         
    return 0;
}