#include <stdio.h>

int main()
{
    int a, b, count = 0, count1 = 0;
    a = 4;
    b = 5;

    while (a <= 4)
    {
        b = 2;
        while (b <= 5)
        {
            b = b + 2;
            count1 = count1 + 1;
        }
        a = a + 1;
        count = count1 + 1;
    }

    printf("count: %d, count1: %d\n", count, count1);

    return 0;
}
