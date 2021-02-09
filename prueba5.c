#include <stdio.h>

int suma2term(int a, int b)
{
    return (a+b);
}
int main()
{
    int primero, segundo;
    printf("Ingrese el primer sumando: ");
    scanf("%d",&primero);
    printf("Ingrese el segundo sumando: ");
    scanf("%d",&segundo);
    printf("La suma es igual a: %d\n", suma2term(primero,segundo));
    fflush(stdin);
    getchar();
    return 0;
}
