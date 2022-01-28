#include <stdio.h>

int main()
{

    for (unsigned short int i = 0; i < 128; i++)
        printf("CHAR: %c | CODE: %d | HEX: %x\n", (char)i, i, i);

    return 0;
}