#include <stdio.h>

int divider(int n, int d, char modulo);

int multiplicator(int n1, int n2);

int modulo(int n, int d);

int main(const int argc, const char **argv)
{
    int n1, n2;
    char op;

    printf("Entrez un nombre : ");
    scanf("%d", &n1);

    printf("Indiquez l'opération : ");
    scanf("%s", &op);

    printf("Entrez un nombre : ");
    scanf("%d", &n2);

    printf("Résultat de %d %c %d est ", n1, op, n2);

    if (op == '+')
        printf("%d\n", n1 + n2);
    if (op == '-')
        printf("%d\n", n1 - n2);
    if (op == '*')
        printf("%d\n", multiplicator(n1, n2));
    if (op == '/')
        printf("%d\n", divider(n1, n2, 0));
    if (op == '%')
        printf("%d\n", modulo(n1, n2));

    return 0;
}

int divider(int n, int d, char modulo)
{
    if (d == 0)
        return -1;

    if (n == 0)
        return n;

    if (n == d)
        return modulo ? 0 : 1;

    int result = 0;
    do
    {
        n -= d;
        result++;
    } while (n >= d);

    return modulo ? n : result;
}

int multiplicator(int n1, int n2)
{
    if (n1 == 0 || n2 == 0)
        return 0;

    if (n1 == 1)
        return n2;

    if (n2 == 1)
        return n1;

    int i = 0;
    int result = 0;
    do
    {
        result += n1;
        i++;
    } while (i < n2);

    return result;
}

int modulo(int n, int d)
{
    return divider(n, d, 1);
}