#include <stdio.h>

int main()
{
    int temp, a[] = {1, 2, 3, 4, 5};

    temp = ++*a; // Increment the value at the address pointed by 'a' and assign it to 'temp'

    printf("temp: %d\n", temp); // Print the value of 'temp'

    return 0;
}
