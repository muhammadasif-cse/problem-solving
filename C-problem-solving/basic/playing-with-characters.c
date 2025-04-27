#include <limits.h>
#include <stdio.h>

int main()
{
    char cha;
    char s[100];
    char sen[100];

    scanf("%c %s", &cha, &s);
    getchar();
    fgets(sen, 100, stdin);

    printf("%c\n%s\n", cha, s);
    printf("%s\n", sen);


    return 0;
}

/*
C
Language
Welcome To C!!
*/
