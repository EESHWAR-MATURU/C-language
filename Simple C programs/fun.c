#include <stdio.h>

void fun(int x, int y)
{
    if (x > 1)
        fun(x - 1, y + 3);

    printf("%d\n", y);
}

int main()
{
    int x = 3, y = 2;
    fun(x, y);
    return 0;
}
