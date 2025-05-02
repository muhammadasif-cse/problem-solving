#include <stdio.h>
#include <string.h>

int main()
{
    char F[101];
    scanf("%s", &F);

    int length = strlen(F);

    char firstChar = "", lastChar = "";
    for (int i = 0; i < length; i++)
    {
        firstChar = F[0];
        lastChar = F[length - 1];
    }

    if (firstChar == lastChar) printf("Yes");
    else printf("No");


    return 0;
}
