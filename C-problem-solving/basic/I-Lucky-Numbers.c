//*📚 বিভাজ্য (Divisibility) কী?
//* যদি একটি সংখ্যা X অন্য একটি সংখ্যা Y দ্বারা ভাগ করা যায়, এবং ভাগশেষ(remainder) শূন্য(0) আসে, তাহলে X হচ্ছে Y এর বিভাজ্য।
#include <stdio.h>

int main()
{
    int N, M = 0;
    scanf("%d", &N);

    // first and last number get
    M = N % 10;
    N = N / 10;


    if (N > 0 && M > 0 && N % M == 0 || M % N == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
