/*
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
Input
Only one line containing two separated numbers X, Y (1 <= X, Y <= 10^5)

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
*/

#include <stdio.h>

int main()
{
    long long int X, Y;

    scanf("%lld %lld", &X, &Y);
    long long int summation = X + Y;
    long long int multiplication = X * Y;
    long long int subtraction = X - Y;
    printf("%lld + %lld = %lld\n", X, Y, summation);
    printf("%lld * %lld = %lld\n", X, Y, multiplication);
    printf("%lld - %lld = %lld\n", X, Y, subtraction);

    return 0;
}
