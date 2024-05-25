#include <stdio.h>

int main() {
    int b = 5, c = 6, d = 7;
    int a;

    for(a = 1; a <= 4; a++) {
        c = a + b;
        if((b + c) % 10 != 0) {
            c = c + a;
        } else {
            d = d + a;
        }
    }

    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}
