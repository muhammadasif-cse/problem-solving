#include <stdio.h>

int main()
{
    char ALPHABET;
    scanf("%c", &ALPHABET);
    if (97 <= ALPHABET && ALPHABET <= 122)
    {
        if (ALPHABET == 122)
        {
            printf("%c", 97);
        }
        else
        {
            printf("%c", ALPHABET + 1);
        }
    }
    return 0;
}
