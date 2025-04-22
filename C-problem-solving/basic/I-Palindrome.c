#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000];
    scanf("%s", &S);
    const char length = strlen(S);


    int lv = 0, rv = length - 1, palindrome = 1;
    while (lv < rv)
    {
        if (S[lv] != S[rv])
        {
            palindrome = 0;
            break;
        }
        lv++;
        rv--;
    }
    if (palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
