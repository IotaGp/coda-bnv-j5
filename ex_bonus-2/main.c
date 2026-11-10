#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
int main()
{
    int nb1 = nombre();
    int nb2 = add(0, nb1);
    while(nb1 != 0)
    {        
        nb1 = nombre();
        int somme = add(nb2, nb1);
        nb2 = nb2 + somme ;
    }
    exit(0);
}