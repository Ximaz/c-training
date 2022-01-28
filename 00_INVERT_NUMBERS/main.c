#include <stdio.h>

int main() {
    int n1;
    int n2;

    printf("Entrez un premier entier : ");
    scanf("%d", &n1);

    printf("Entrez un second entier : ");
    scanf("%d", &n2);

    printf("Avant l'échange, n1 vaut %d et n2 vaut %d.\n", n1, n2);

    int n3 = n1;
    n1 = n2;
    n2 = n3;
    printf("Après l'échange, n1 vaut %d et n2 vaut %d.\n", n1, n2);
    return 0;
}