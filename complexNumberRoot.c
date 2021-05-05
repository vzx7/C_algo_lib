#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// calculating the root of a complex number
int main(void)
{
    const double pi = 3.141592;
    int size = 5;
    int index = 0;
    double realPartNum = 3, imaginaryPartNum = 4;

    double r, phi, arg;

    r = pow(realPartNum * realPartNum + imaginaryPartNum * imaginaryPartNum, 0.5 / size);
    phi = atan2(realPartNum, imaginaryPartNum);

    printf("Re(z)=%.3f\tIm(z)=%.3f\n", realPartNum, imaginaryPartNum);
    printf("The result of calculating the root of a power of %d:\n", size);
    printf("index\tRe\tIm\n");

    while (index < size)
    {
        arg = (phi + 2 * pi * index) / size;
        printf("%d\t%.3f\t%.3f\n", index, r * cos(arg), r * sin(arg));
        index++;
    }

    return 0;
}