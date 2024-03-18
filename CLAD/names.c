#include <stdio.h>
#include <string.h>

int main()
{
    static char names[5][20] = {"pascal", "ada", "cobol", "fortran", "perl"};
    int i;
    char temp[20];

    strcpy(temp, names[3]);
    strcpy(names[3], names[4]);
    strcpy(names[4], temp);

    for (i = 0; i < 5; i++)
        printf("%s\n", names[i]);

    return 0;
}
