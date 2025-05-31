#include <stdio.h>

const char *ones[] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen",
    "sixteen", "seventeen", "eighteen", "nineteen"};

const char *tens[] = {
    "zero", "ten", "twenty", "thirty", "forty",
    "fifty", "sixty", "seventy", "eighty", "ninety"};
const char *hundred = "hundred";

void print_number_to_word(int n)
{
    if (n == 100)
    {
        printf("one hundred\n");
        return;
    }
    else if (n >= 20 && n < 100)
    {
        printf("%s", tens[n / 10]);
        if (n % 10 != 0)
        {
            printf(" %s", ones[n % 10]);
        }
        printf("\n");
        return;
    }
    else if (n > 0)
    {
        printf("%s\n", ones[n]);
        return;
    }
    else
    {
        printf("zero\n");
        return;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            printf("%s\n", ones[i]);
        }
        else
        {
            if (i % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }

    return 0;
}