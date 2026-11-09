#include <stdlib.h>
#include <stdio.h>
int add(int nb1, int nb2)
{
    int res = nb1 + nb2;
    printf("%d + %d = %d\n", nb1, nb2, res);
}
int main()
{
    add(2,3);
    exit(0);
}