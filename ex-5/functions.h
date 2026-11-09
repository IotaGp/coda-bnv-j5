#include <stdlib.h>
#include <stdio.h>
#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__
void print_str(char *str)
{
    printf("%s", str);
}
int add(int nb1, int nb2)
{
    int res = nb1 + nb2;
    printf("%d + %d = %d\n", nb1, nb2, res);
    return 0;
}
double compute_average(double nb1, double nb2, double nb3)
{
    double moy = (nb1 + nb2 + nb3)/3;
    printf("La moyenne des trois notes est %.2f\n", moy);
    exit(0);
}
#endif