#include <stdio.h>

int main()
{
    int n;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d est paire.\n", n);
    else
        printf("%d est impaire.\n", n);
    return 0;
}
