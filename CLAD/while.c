#include <stdio.h>

int main() {
    int a = 1, b = 5, i;
    
    while (a > 0) {
        for (i = 1; i <= b; i++) {
            printf("%d ", i);
        }
        printf("\n");
        a--;
        --a;
    }
    
    return 0;
}
