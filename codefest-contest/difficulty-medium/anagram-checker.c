#include <stdio.h>
#include <string.h>

int main()
{
    char word1[101], word2[101];

    scanf("%s %s", &word1, &word2);

    int len = strlen(word1);
    int freq[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < len; i++)
    {
        char value = word1[i];
        char value1 = word2[i];
        freq[value - 'a']++;
        freq2[value1 - 'a']++;
    }

    int isAnagram = 1;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != freq2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) printf("Yes\n");
    else printf("No\n");

    return 0;
}
