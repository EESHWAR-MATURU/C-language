#include <stdio.h>
void main()
{
    int i;
    char a[] = "\0";
    if (printf("%s", a))
        printf("Ok here \n");
    else
        printf("Forget it\n");
}