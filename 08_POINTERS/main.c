#include <stdio.h>

int main(const int argc, const char** argv)
{
    int i = 10;
    int* p = &i;

    printf("La valeur actuelle de i est : %d\n", i);

    *p = 20;

    printf("La valeur actuelle de i est : %d\n", i);
    return 0;
}
