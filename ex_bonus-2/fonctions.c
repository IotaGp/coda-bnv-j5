#include <stdio.h>
#include <stdlib.h>
int add(int n1, int n2)
{
    int res = n1 + n2;
    printf("%d + %d = %d\nSomme actuelle = %d\n",n1, n2, res, res);
    return res;
}
int nombre()
{
    int nombre;
    printf("Choisissez un nombre : ");
    int ret = scanf("%d", &nombre);
    printf("retour : %d\n", ret);
    if(nombre != 0)
    {
        return nombre;
    }
    else
    {
        printf("Fin des opérations\n");
        exit(0);
    }
}