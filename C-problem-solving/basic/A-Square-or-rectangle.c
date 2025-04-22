#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int w, h;

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &w, &h);
        if (w == h)
        {
            printf("%s\n", "Square");
        }
        else
        {
            printf("%s\n", "Rectangle");
        }
    }

    return 0;
}
