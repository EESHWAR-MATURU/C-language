#include <stdio.h>

int main() {
    int a = 2, b = 2;
    while(a + 1 ? --a : b++) {
        printf("%d ", a);
    }
    return 0;
}
