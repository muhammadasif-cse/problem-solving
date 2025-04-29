#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char kacchi[100] = "Three Kacchi";
    char pizza[100] = "One Large Pizza";
    char burger[100] = "Three Small Burger";
    char fuchka[100] = "Three Fuchka";
    char nothing[100] = "Nothing";

    if (N >= 1000)
    {
        printf("%s", kacchi);
    }
    else if (N >= 500)
    {
        printf("%s", pizza);
    }
    else if (N >= 250)
    {
        printf("%s", burger);
    }
    else if (N >= 100)
    {
        printf("%s", fuchka);
    }
    else
    {
        printf("%s", nothing);
    }
    return 0;
}
