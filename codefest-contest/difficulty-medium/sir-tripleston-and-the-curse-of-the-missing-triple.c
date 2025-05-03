#include <stdio.h>
#include <string.h>

int main()
{
    char S[78];
    scanf("%s", &S);
    int len = strlen(S);
    char characters[26] = {0};


    for (int i = 0; i < len; i++)
    {
        char value = S[i];
        characters[value - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (characters[i] == 2)
        {
            printf("%c\n", i + 'a');
            break;
        }
    }

    return 0;
}
