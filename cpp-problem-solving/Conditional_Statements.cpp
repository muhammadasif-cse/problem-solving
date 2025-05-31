#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string number_of_word[10] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };

    if (n >= 0 && n <= 9)
    {
        cout << number_of_word[n];
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}