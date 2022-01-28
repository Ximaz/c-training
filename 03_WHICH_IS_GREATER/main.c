#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Entrez un nombre : ");
    scanf("%d", &n1);

    printf("Entrez un nombre : ");
    scanf("%d", &n2);

    printf("Entrez un nombre : ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) printf("%d est le nombre le plus grand.\n",n1);
    if (n2 > n1 && n2 > n3) printf("%d est le nombre le plus grand.\n",n2);
    if (n3 > n1 && n3 > n2) printf("%d est le nombre le plus grand.\n",n3);

    return 0;
}
