#include <stdio.h>

int main()
{
    int temp = 1, num = 5, count = 0;

    for (int i = 0; i <= num; i++)
    {
        for (int j = num; j <= 3 * num; j += 2)
        {
            for (int k = 1; k <= j; k += 3)
            {
                int s = i + j + k;
                if (s % 2 == 0)
                    count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
