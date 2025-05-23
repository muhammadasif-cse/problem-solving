#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char number[102];
    scanf("%s", number);

    int odd_sum = 0, even_sum = 0;
    int len = strlen(number);

    for (int i = len - 1, pos = 1; i >= 0; i--, pos++)
    {
        int digit = number[i] - '0';
        if (pos % 2 == 1)
        {
            odd_sum += digit;
        }
        else
        {
            even_sum += digit;
        }
    }

    int diff = abs(odd_sum - even_sum);
    if (diff % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
