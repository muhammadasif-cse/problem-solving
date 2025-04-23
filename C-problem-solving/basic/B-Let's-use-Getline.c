#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];

    fgets(s, 1000001, stdin);

    int length = strlen(s);


    for (int i = 0; i < length; i++)
    {
        if (s[i] == 92)
        {
            s[i] = '\0';
            break;
        }
    }
    printf("%s", s);

    return 0;
}

// google \or facebook

// Egyptian collegiate programming\ contest
