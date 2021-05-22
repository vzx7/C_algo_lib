#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    void *pnt;
    double x;
    char symb;

    pnt = &num;
    *((int *)pnt) = 512;

    printf("Number: (type int):\t%d\n", num);

    pnt = &x;
    *((double *)pnt) = 1.23456;

    printf("Number: (type double):\t%f\n", x);

    pnt = &symb;
    *((char *)pnt) = 'D';

    printf("Symbol: (type char):\t%c\n", symb);

    return 0;
}