/*
Given a number N. Print the factorial of number N.

Input
First line contains a number T (1 ≤ T ≤ 15) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 20)

Output
For each test case print a single line contains the factorial of N.
*/

#include <stdio.h>

int main()
{
    int T; // times
    int N; // input value

    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        long long int R = 1; // result
        scanf("%d", &N);
        for (int j = 1; j <= N; j++)
        {
            R = R * j;
            // printf("%d * %d = %d \n", j, j, R); // view
        }
        printf("%lld\n", R);
    }

    return 0;
}
