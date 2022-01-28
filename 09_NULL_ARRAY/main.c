#include <stdio.h>

#define ARRAY_SIZE 7

int main(const int argc, const char **argv)
{
    int array[ARRAY_SIZE] = {1, 2, 0, 30, 0, 2, 0};
    int range = sizeof(array) / sizeof(int); // Compute the range to iterate through.
    int *start = &array[0];                  // Points to the first array's element.
    int *end = &array[ARRAY_SIZE];           // Points to the last array's element.

    // Points to NULL and then, to each array elements.
    for (int *i = start; i < end; i++)
    {
        if (*i == 0)
            printf("Valeur NULL à l'indice %ld.\n", i - start);
    }
    return 0;
}