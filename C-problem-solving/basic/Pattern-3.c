/*
*Statement
You're given N as input. Print the following pattern given in testcases.
For more clarification see the example below.

*Constraints
1 <= N <=10

*Input format
Only one line containing a number N

*Output Format
Print the answer according to the required above

*Sample Input 1
6
*Sample Output 1
A
B B
C C C
D D D D
E E E E E
F F F F F F
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 64 + i);
        }
        printf("\n");
    }

    return 0;
}
