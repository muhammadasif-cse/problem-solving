#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    char S[1001];
    int freq[26];

    for (int t = 0; t < T; t++)
    {
        scanf("%s", S);
        int len = strlen(S);

        for (int i = 0; i < 26; i++)
        {
            freq[i] = 0;
        }

        for (int i = 0; i < len; i++)
        {
            freq[S[i] - 'a']++;
        }

        int odd_count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd_count++;
            }
        }

        int min_additions = (odd_count > 1) ? (odd_count - 1) : 0;
        printf("%d\n", min_additions);
    }

    return 0;
}