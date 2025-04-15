#include <stdio.h>

int main()
{
    int X, Y, T, R = 0;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X < Y)
            for (X = X + 1; X < Y; X++)
            {
                if (X % 2 != 0)
                {
                    R = X + R;
                }
            }
        else
        {
            for (Y = Y + 1; Y < X; Y++)
            {
                if (Y % 2 != 0)
                {
                    R = Y + R;
                }
            }
        }
        printf("%d\n", R);
        R = 0;
    }


    return 0;
}
