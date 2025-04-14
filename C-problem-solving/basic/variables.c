/*
Variables
Time Limit: 1 Seconds

Memory Limit: 2.93 MB

Statement
You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

Constraints
-10^9 <= A <= 10^9
-10^18 <= B <= 10^18
-10^9 <= C <= 10^9
Input format
First line will contain A
Second line will contain B
Third line will contain C
Fourth line will contain D
Output Format
Output them serially and put a new line after each value. Output the floating value 2 points after decimal.
Sample Input 1
100

1234567891234567

23.5675

A

Sample Output 1
100

1234567891234567

23.57

A
*/

#include <stdio.h>
int main() {
  int A;
  long B;
  float C;
  char D;

  scanf("%d %ld %f %c", &A, &B, &C, &D);



  return 0;
}