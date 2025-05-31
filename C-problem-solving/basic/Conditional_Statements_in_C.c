#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);

    char numbers_word[10][10] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    if (X >= 0 && X <= 9)
    {
        printf("%s", numbers_word[X]);
    }
    else
    {
        printf("%s", "Greater than 9");
    }
    return 0;
}