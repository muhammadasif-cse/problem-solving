#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;

    string number_words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (X < 0 || X > 9)
    {
        cout << "Greater than 9" << endl;
    }
    else
    {
        cout << number_words[X] << endl;
    }

    return 0;
}