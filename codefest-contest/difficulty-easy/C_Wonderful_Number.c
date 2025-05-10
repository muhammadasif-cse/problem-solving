#include <stdio.h>
#include <string.h>

int isPalindrome(int num)
{
    // convert numbers to string
    char charNum[1000000001];
    scanf("%s", &charNum); // sprintf function using for convert number to string;

    int length = strlen(charNum);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%c", charNum[i]);
    // }

    // check palindrome
    int firstChar = 0, lastChar = length - 1;
    while (firstChar < lastChar)
    {
        if (charNum[firstChar] != charNum[lastChar])
        {
            return 0;
        }
        firstChar++;
        lastChar--;
    }

    return 1;
}

int isOdd(int num)
{
    if (num % 2 == 0)
        return 1;

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    isPalindrome(n);

    return 0;
}