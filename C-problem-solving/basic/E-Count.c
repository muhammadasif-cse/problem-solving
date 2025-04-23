#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];

    scanf("%s", s);
    int length = strlen(s);

    int count = 0;
    for (int i = 0; i < length; i++)
    {
        int next = s[i] - 48;
        count += next;
    }
    printf("%d", count);
    return 0;
}
