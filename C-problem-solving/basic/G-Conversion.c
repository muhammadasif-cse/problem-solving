#include <stdio.h>
#include <string.h>

int main()
{
    char S[100001];
    scanf("%s", &S);
    const int length = strlen(S);

    char conversion[length];

    for (int i = 0; i < length; i++)
    {
        if (S[i] == 44)
        {
            conversion[i] = ' ';
        }
        else if (90 >= S[i] && S[i] >= 65)
        {
            conversion[i] = S[i] + 32;
        }
        else if (122 >= S[i] && S[i] >= 97)
        {
            conversion[i] = S[i] - 32;
        }
        else
        {
            conversion[i] = S[i];
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%c", conversion[i]);
    }
    return 0;
}
