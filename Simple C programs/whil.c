#include <stdio.h>

int main()
{
    int a = 10, b = 15, i;

    while (a > 0)
    {
        for (i = 1; i <= b; i += 3)
        {
            printf("%d ", i);
        }
        printf("\n");
        a -= 5;
    }

    return 0;
}
