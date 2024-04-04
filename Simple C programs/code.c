#include <stdio.h>
int main()
{
    // Declare variables
    int a, b, c, d;
    int n = 10;
    int temp = 15; // temporary variable for b, as b is a reserved keyword in C

    // Perform bitwise operations
    a = n << 4;
    b = n >> 2;
    c = n << 5;
    d = n >> 3;

    // Print results
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}
