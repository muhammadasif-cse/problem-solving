#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);


    if (N % 3 == 0)
    {
        printf("%s", "Yes");
    }
    else
    {
        printf("%s", "No");
    }

    return 0;
}
