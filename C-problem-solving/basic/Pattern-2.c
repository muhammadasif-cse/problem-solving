/*
Pattern 1
Time Limit: 0.1 Seconds

Memory Limit: 2.93 MB

Statement
You're given N as input. Print the following pattern given in testcases.



For more clarification see the example below.

Constraints
1 <= N <=10

Input format
Only one line containing a number N .

Output Format
Print the answer according to the required above

Sample Input 1
6

Sample Output 1
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (; N >= 1; N--)
    {
        printf("%d", N);
        for (int i = N - 1; i >= 1; i--)
        {
            printf(" %d", i);
        }
        printf("\n");
    }


    return 0;
}
