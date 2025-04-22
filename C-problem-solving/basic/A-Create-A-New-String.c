#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    char T[1001];

    scanf("%s", &S);
    scanf("%s", &T);

    printf("%llu ", strlen(S));
    printf("%llu\n", strlen(T));

    printf("%s ", S);
    printf("%s", T);


    return 0;
}
