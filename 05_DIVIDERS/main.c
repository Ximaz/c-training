#include <stdio.h>

int main(const int argc, const char **argv)
{
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            printf("%d est un diviseur de %d.\n", i, n);
    }

    return 0;
}
