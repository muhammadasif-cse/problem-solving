#include <stdio.h>

int main()
{
    int IF, IS;
    float FF, FS;
    scanf("%d %d %f %f", &IF, &IS, &FF, &FS);
    int ISUM = IF + IS;
    int IDIFF = IF - IS;
    float FSUM = FF + FS;
    float FDIFF = FF - FS;


    printf("%d %d\n%0.1f %0.1f", ISUM, IDIFF, FSUM, FDIFF);
    return 0;
}
