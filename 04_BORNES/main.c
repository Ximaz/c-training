#include <stdio.h>

int main(const int argc, const char** argv)
{
    printf("Entrez un nombre (0 pour terminer le programme) : ");
    int higher;
    scanf("%d", &higher);
    if (higher == 0)
        return 0;

    int lower = higher;
    do
    {
        printf("Entrez un nombre (0 pour terminer le programme) : ");
        int n = 0;

        scanf("%d", &n);
        if (n == 0) break;

        if (n < lower) lower = n;
        if (n > higher) higher = n;

    } while (lower > 0);

    printf("Le nombre le plus grand est %d et le nombre le plus petit est %d.\n", higher, lower);
    return 0;
}
