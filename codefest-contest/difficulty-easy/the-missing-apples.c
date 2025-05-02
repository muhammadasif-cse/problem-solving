#include <stdio.h>

int main()
{
    int initial, given, bought;

    scanf("%d %d %d", &initial, &given, &bought);

    int givenFriend = initial - given;
    int moreBought = givenFriend + bought;

    printf("%d", moreBought);

    return 0;
}
