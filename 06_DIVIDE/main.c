#include <stdio.h>

int main(const int argc, const char** argv)
{
    int a, b, n, divider;
    printf("Entrez un premier nombre : ");
    scanf("%d", &a);

    printf("Entrez un second nombre : ");
    scanf("%d", &b);

    if (a > b) {
        n = a;
        divider = b;
    } else {
        n = b;
        divider = a;
    }

    if (divider == 0) {
        printf("Impossible de diviser par 0.\n");
        return 1;
    }

    if (n == 0) {
        printf("Résultat : 0. Reste : 0.\n");
        return 0;
    }

    if (n == divider) {
        printf("Résultat : 1. Reste : 0.\n");
        return 0;
    }

    int result = 0;
    do {
        n -= divider;
        result++;
    } while (n >= divider);

    printf("Résultat : %d. Reste : %d.\n", result, n);

    return 0;
}
