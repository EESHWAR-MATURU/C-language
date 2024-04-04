#include <stdio.h>
int find(int a, int b)
{
    int temp;
    if (a == 0 || b == 0)
        return 0;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main()
{
    int a = 100, b = 40;
    int x;
    x = find(a, b);
    printf("%d\n", x);
    return 0;
}