#include <stdio.h>

int fun(int n)
{
    if (n == 4)
        return n;
    else
        return 2 * fun(n - 2);
}

int main()
{
    int n = 8;
    printf("Output: %d\n", fun(n));
    return 0;
}
