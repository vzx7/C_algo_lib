#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    char *pnt;
    int k, bites;

    bites = (int)sizeof(int);
    printf("Variable number: %d\n", sizeof(int));
    pnt = (char *)&number;

    for (k = 1; k < bites; k++)
    {
        *pnt = 1;
        pnt++;
    }

    printf("Variable number: %d\n", number);

    number = 0;
    pnt -= bites - 1;
    *pnt = 2;

    printf("Variable number: %d\n", number);

    return 0;
}