#include <stdlib.h>
#include <stdio.h>
double compute_average(double nb1, double nb2, double nb3)
{
    double moy = (nb1 + nb2 + nb3)/3;
    printf("La moyenne des trois notes est %.2f\n", moy);
}
int main()
{
    compute_average(6, 5, 9);
    exit(0);
}